#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    ll test_cases = 1;
    while (test_cases--)
    {
        ll nodes, edges, src;
        cin >> nodes >> edges >> src;

        vector<ll> distance(nodes + 1, 1e15);

        vector<pair<ll, ll>> adj[edges + 10];

        for (ll i = 1; i <= edges; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        priority_queue<pair<ll, ll>> pq;
        distance[src] = 0;
        pq.push({0, src});

        while (!pq.empty())
        {
            ll u = pq.top().second;
            pq.pop();
            for (auto x : adj[u])
            {
                ll v = x.first;
                ll weight = x.second;
                if (distance[v] > distance[u] + weight)
                {
                    distance[v] = distance[u] + weight;
                    pq.push({-distance[v], v});
                }
            }
        }

        for (int i = 1; i <= nodes; i++)
            cout << distance[i] << " 0 0" << endl;
    }
}
