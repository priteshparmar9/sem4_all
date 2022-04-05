#include <bits/stdc++.h>
#define ll long long int

using namespace std;

void deprecatedLand(vector<vector<char>> &land, ll &r, ll &c, ll &maxR, ll &maxC, ll possibleX[], ll possibleY[])
{
    if (r < 0 || r >= maxR)
        return;
    if (c < 0 || c >= maxC)
        return;
    for (ll i = 0; i < 4; i++)
    {
        ll newR = (r + possibleX[i]), newC = (c + possibleY[i]);

        if (newR > 0 && newR < maxR && newC > 0 && newC < maxC)
        {
            if (land[newR][newC] == '.')
            {
                land[newR][newC] = '*';
                deprecatedLand(land, newR, newC, maxR, maxC, possibleX, possibleY);
            }
        }
    }
}
void visitAdjacent(vector<vector<char>> &land, vector<vector<ll>> &visited, ll &r, ll &c, ll &maxR, ll &maxC, ll possibleX[], ll possibleY[])
{
    if (r < 0 || r >= maxR || c < 0 || c >= maxC)
        return;

    for (ll i = 0; i < 4; i++)
    {
        ll newR = (r + possibleX[i]), newC = (c + possibleY[i]);

        if (newR > 0 && newR < maxR && newC > 0 && newC < maxC)
        {
            if (land[newR][newC] == '.' && visited[newR][newC] == 0)
            {
                visited[newR][newC]++;
                visitAdjacent(land, visited, newR, newC, maxR, maxC, possibleX, possibleY);
            }
        }
    }
}

int main()
{
    ll t, r, c;
    cin >> t;
    while (t--)
    {
        cin >> r >> c;
        vector<vector<char>> land(r, vector<char>(c));
        vector<pair<ll, ll>> dotPos, dotAfterCheck;
        for (ll i = 0; i < r; i++)
        {
            for (ll j = 0; j < c; j++)
            {
                cin >> land[i][j];
                if (land[i][j] == '.')
                    dotPos.push_back({i, j});
            }
        }
        bool deprecated = false;
        ll possibleX[] = {-1, 0, 0, 1}, possibleY[] = {0, -1, 1, 0};
        ll pos_land = 0;

        for (auto allPos : dotPos)
        {
            if (allPos.first == 0 || allPos.second == 0 || allPos.first == (r - 1) || allPos.second == (c - 1))
            {
                land[allPos.first][allPos.second] = '*';
                deprecatedLand(land, allPos.first, allPos.second, r, c, possibleX, possibleY);
            }
        }
        vector<vector<ll>> visited((r + 1), vector<ll>((c + 1), 0));
        for (auto allPos : dotPos)
        {
            if (land[allPos.first][allPos.second] == '.' && visited[allPos.first][allPos.second] == 0)
            {
                visited[allPos.first][allPos.second]++;
                visitAdjacent(land, visited, allPos.first, allPos.second, r, c, possibleX, possibleY);

                pos_land++;
                dotAfterCheck.push_back({allPos.first, allPos.second});
            }
        }
        cout << pos_land << endl;
    }
    return 0;
}