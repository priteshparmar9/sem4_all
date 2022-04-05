#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1000;
int u[N], v[N], w[N], h[N], dp[N];
vector<int> g[N];
set<pair<int, int>> p;
int n, m;

int ds(int k)
{
    for (int i = 1; i < n; i++)
    {
        h[i] = 1e7 + 300;
        p.insert(make_pair(h[i], i));
    }
    h[k] = 0;
    dp[k] = 1;
    p.insert(make_pair(h[0], 0));
    while (p.size())
    {
        int x = (*(p.begin())).second;
        p.erase(make_pair(h[x], x));
        for (int e : g[x])
        {
            int y = u[e] ^ v[e] ^ x;
            if (h[y] > h[x] + w[e])
            {
                dp[y] = dp[x];
                p.erase(make_pair(h[y], y));
                h[y] = h[x] + w[e];
                p.insert(make_pair(h[y], y));
            }
            else if (h[y] == h[x] + w[e])
            {
                dp[y] += dp[x];
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> n >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> u[i] >> v[i] >> w[i];
            u[i]--,v[i]--;
            g[u[i]].push_back(i);
            g[v[i]].push_back(i);
        }
        ds(0);
        cout << dp[n - 1] << endl;
        p.clear();
        for (int i = 0; i < n; i++)
        {
            g[i].clear();
        }
    }
    return 0;
}