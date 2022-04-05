#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test_cases = 1;
    while(test_cases--){
        int m,n;
        cin >> m;
        int coins[m+1];
        int dp[m+1][n+1];
        for(int i = 1; i <= m; i++){
            cin >> coins[i];
        }
        cin >> n;
        for(int i = 1; i <= m; i++){
            dp[i][0] = 0;
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(i == 1 && j < coins[i]){
                    dp[i][j] = 1e9;
                }
                else if(i == 1){
                    dp[i][j] = 1 + dp[i][j-coins[i]];
                }
                else if(j < coins[i]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = min(dp[i-1][j],1+dp[i][j-coins[i]]);
                }
            }
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}