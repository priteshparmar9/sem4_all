#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, m, t1, t2;
bool *visited;
vector <int>* adj;

void dfs(int source, int &m, int cost[]){
    visited[source] = true;
    if(cost[source] >= 0){
        m = min(m,cost[source]);
    }
    for(int itr:adj[source]){
        if(visited[itr] == false){
            dfs(itr,m,cost);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        cin >> n >> m;
        int cost[n+1];
        visited = new bool[n+1];
        adj = new vector<int>[n+1];
        for(int i = 0; i < m; i++){
            cin >> t1 >> t2;
            adj[t1].push_back(t2);
            adj[t2].push_back(t1);
        }
        for(int i = 1; i <= n; i++){
            cin >> cost[i];
            visited[i] = false;
        }

        int count = 0;
        int total = 0;
        int minimum = INT_MAX;
        bool flag = true;

        for(int i = 1; i <= n; i++){
            if(visited[i] == true){
                continue;
            }  
            int m = INT_MAX;
            dfs(i,m,cost);
            if(m == INT_MAX){
                flag = false;
            }
            total += m;
            count++;
            minimum = min(m, minimum);
        }
        if(count == 0){
            cout << 0;
        }
        if(count > 1 && !flag){
            cout << "-1";
        }
        else{
            cout << (count - 2)*minimum + total;
        }


    }
    return 0;
}