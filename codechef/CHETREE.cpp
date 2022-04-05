#include <bits/stdc++.h>
#define ll long long int

using namespace std;

pair<ll, ll> solve(ll node, ll depth, vector<ll> adj[], vector<ll> &val, vector<bool> &visited, vector<pair<ll, ll>> &ans)
{
    if (visited[node] == true)
        return ans[node];

    visited[node] = true;
    pair<ll, ll> p({0, 0});
    if (depth % 2 == 0)
        p.first += val[node];

    else
        p.second += val[node];

    for (auto &it : adj[node])
    {
        auto temp = solve(it, depth + 1, adj, val, visited, ans);
        p.first += temp.first;
        p.second += temp.second;
    }
    ans[node] = {p.first, p.second};
    return p;
}

int main()
{
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    vector<bool> visited(n + 1, false);

    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> val(n + 1, 0);
    vector<pair<ll, ll>> ans(n + 1, {0, 0});
    for (ll i = 1; i <= n; i++)
    {
        cin >> val[i];
    }
    solve(1, 0, adj, val, visited, ans);
    ll q;
    cin >> q;
    while (q--)
    {
        ll x, t;
        cin >> x >> t;
        if (t == 0)
            cout << ans[x].first << endl;

        else
            cout << ans[x].second << endl;
    }
    return 0;
}