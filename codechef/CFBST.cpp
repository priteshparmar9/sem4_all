#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int sol(int n){
    vector<int> dp(n+1,0);
    dp[0]=1,dp[1]=1;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = dp[i] + (dp[i-j]*dp[j-1]);
        }
    }
    return dp[n];
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        cout << sol(n) << endl;
    }
    return 0;
}