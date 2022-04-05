#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long ll;

int fun(int n, int k, int dp[]){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int count = 0;
    for(int i = 2; i <= k; i+=2){
        count = ((count % mod )+ fun(n-i,k,dp))%mod;
    }
    dp[n] = count;
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, k;
        cin >> n >> k;
        int dp[n+1];
        memset(dp,-1,sizeof(dp));
        cout << fun(n, k, dp) << endl;
    }
    return 0;
}