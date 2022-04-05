#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll inf = 1e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n, m, t1, t2;
        cin >> n >> m;
        vector <ll> height(n+1), cost(n+1);
        vector<vector<ll>> adj(n+1),distance(n+1,vector<ll>(2,inf));
        for(int i = 1; i <= n; i++){
            cin >> height[i];
        }
        for(int i = 1; i <= n; i++){
            cin >> cost[i];
        }
        while(m--){
            cin >> t1 >> t2;
            adj[t1].push_back(t2);
            adj[t2].push_back(t1);
        }
        priority_queue<vector<ll>>q;
        distance[1][0] = distance[1][1] = cost[1];
        q.push({-distance[1][0],1,0});
        q.push({-distance[1][1],1,1});

        while(!q.empty()){
            ll d = q.top()[0];
            int u = q.top()[1];
            int mode = q.top()[2];
            q.pop();

            for(int v:adj[u]){
                if(height[v] >= height[u]){
                    ll cst = distance[u][mode];
                    if(mode != 0){
                        cst += cost[u];
                    }
                    if(distance[v][0] > cst){
                        distance[v][0] = cst;
                        q.push({-distance[v][0],v,0});
                    }
                }
                if(height[v] <= height[u]){
                    ll cst = distance[u][mode];
                    if(mode != 1){
                        cst += cost[u];
                    }
                    if(distance[v][1] > cst){
                        distance[v][1] = cst;
                        q.push({-distance[v][1],v,1});
                    }
                }
            }
        }
        if(min(distance[n][0],distance[n][1]) == inf){
            cout << -1;
        }
        else{
            cout << min(distance[n][0],distance[n][1]);
        }
    }
    return 0;
}