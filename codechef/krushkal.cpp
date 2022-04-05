#include <bits/stdc++.h>
using namespace std;

int arr[100];
int find(int x)
{
    if (arr[x] == x)
    {
        return x;
    }
    return find(arr[x]);
}

void unite(int x, int y)
{
    int a = find(x);
    int b = find(y);
    arr[a] = b;
    return;
}

class Graph
{
private:
    vector<pair<int, pair<int, int>>> edges;
    int n, m;

public:
    Graph(int n, int m)
    {
        this->n = n, this->m = m;
    }

    void add_edge(int u, int v, int w)
    {
        edges.push_back(make_pair(w, make_pair(u, v)));
        return;
    }

    int mst()
    {
        int mst_weight = 0;
        int mst_edges = 0;

        int mst_ni = 0;

        sort(edges.begin(), edges.end());

        cout << "Selected edges with their weight : " << endl;

        while ((mst_edges < n - 1) || (mst_ni < m))
        {
            int u = edges[mst_ni].second.first;
            int v = edges[mst_ni].second.second;
            int w = edges[mst_ni].first;

            if (find(u) != find(v))
            {
                unite(u, v);
                mst_weight += w;
                cout << u << " " << v << " " << w << endl;
                mst_edges++;
            }
            mst_ni++;
        }
        return (mst_edges, mst_weight);
    }
};

int main()
{

    for (int i = 0; i < 100; i++)
    {
        arr[i] = i;
    }
    int n, m;
    cin >> n >> m;
    Graph g = Graph(n, m);
    int u, v, w;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        g.add_edge(u, v, w);
    }
    cout << "Edges in MST are:- "
         << "\n";
    (n, m) = g.mst();
    cout << "Total Edges in MST is:- " << n << endl;
    cout << "Weight is " << m << endl;
    return 0;
}