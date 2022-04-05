#include <bits/stdc++.h>
using namespace std;

int *x;
int **graph;
int V, E;
int sol_count = 0;

void print()
{
    cout << "Solution : " << sol_count << " : ";
    for (int i = 1; i < V+1; i++)
    {
        cout << x[i] << " ";
    }
    cout << x[1];
    cout << endl;
}

void nextValue(int k)
{
    while (true)
    {
        x[k] = (x[k] + 1) % (V + 1);
        if (!x[k])
        {
            return;
        }
        if (graph[x[k - 1]][x[k]] == 1)
        {
            int j;
            for (j = 1; j < k; j++)
            {
                if (x[k] == x[j])
                {
                    break;
                }
            }
            if (j == k)
            {
                if ((k < V) || (k == V && graph[x[V]][x[1]] != 0))
                {
                    return;
                }
            }
        }
    }
}

// void mColoring(int k)
// {
//     while (true)
//     {
//         nextValue(k);
//         if (x[k] == 0)
//         {
//             return;
//         }
//         if (k == V - 1)
//         {
//             sol_count++;
//             print();
//         }
//         else
//         {
//             mColoring(k + 1);
//         }
//     }
// }

void Hamilronian(int k)
{
    while (true)
    {
    // cout << ".";
        nextValue(k);
        if (x[k] == 0)
        {
            return;
        }
        if (k == V)
        {
            sol_count++;
            print();
        }
        else
        {
            Hamilronian(k + 1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> V >> E;
    graph = (int **)calloc(V + 1, sizeof(sizeof(int *)));
    for (int i = 0; i < V + 1; i++)
    {
        graph[i] = (int *)calloc(V + 1, sizeof(int));
    }
    for (int i = 0; i < V + 1; i++)
    {
        for (int j = 0; j < V + 1; j++)
        {
            graph[i][j] = 0;
        }
    }
    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    x = (int *)calloc(V + 1, sizeof(int));
    for (int i = 0; i < V + 1; i++)
    {
        x[i] = 0;
    }
    x[1] = 1;
    Hamilronian(2);
    return 0;
}