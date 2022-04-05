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
        int weight[5] = {1,4,5,6,7};
        int value[5] = {1,6,18,22,28};
        int dp[6][12];

        for(int i = 1; i < 6; i++){
            dp[i][0] = 0;
        }
        for(int i = 1; i < 6; i++){
            for(int j = 1; j < 12; j++){
                if(i==1&&j< weight[i]){
                    dp[i][j] = 0;
                }
                else if(j< weight[i]){
                    dp[i][j] = dp[i-1][j];
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-weight[i]+value[i]]);
                }
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}