#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int dp[51][51][51];

int sol(vector<vector<int>> &m, int r1, int c1, int r2)
{
    int c2 = r1 + c1 - r2, n = m.size();
    if (r1 >= n || c1 >= n || r2 >= n || c2 >= n || m[r1][c1] == -1 || m[r2][c2] == -1)
        return INT_MIN;
    if (dp[r1][c1][r2] != -1)
        return dp[r1][c1][r2];
    if (r1 == n - 1 && c1 == n - 1)
        return m[r1][c1];
    if (r2 == n - 1 && c2 == n - 1)
        return m[r2][c2];

    int temp = 0;
    (r1 == r2 && c2 == c1) ? temp = m[r1][c1] : temp = m[r1][c1] + m[r2][c2];

    temp += max({sol(m, r1 + 1, c1, r2 + 1), sol(m, r1 + 1, c1, r2), sol(m, r1, c1 + 1, r2 + 1), sol(m, r1, c1 + 1, r2)});

    return dp[r1][c1][r2] = temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n));
        for (auto &i : v)
        {
            for (auto &j : i)
            {
                cin >> j;
            }
        }

        memset(dp, -1, sizeof(dp));
        cout << max(0, sol(v, 0, 0, 0)) << endl;
    }
    return 0;
}