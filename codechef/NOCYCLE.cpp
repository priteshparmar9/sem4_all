#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n, m, t1, t2;
        cin >> n >> m;
        vector <vector<int>> adj(n+1);
        int m1 = m;
        while(m1--){
            cin >> t1 >> t2;
            adj[t1].push_back(t2);
            adj[t2].push_back(t1);
        }
        int count = 0, k = 0;
        vector<bool> visited(n+1,0);
        for(int i = 1; i <= n; i++){
            if(visited[i]){
                continue;
            }
            queue <int> q;
            q.push(i);
            count++;
            while (q.size())
            {
                int x = q.front();
                visited[x] = 1;
                q.pop();
                k++;
                for(auto j: adj[x]){
                    if(!visited[j]){
                        q.push(j);
                        visited[j] = true;
                    }
                }
            }
        }
        cout << m-k+count;
    }
    return 0;
}