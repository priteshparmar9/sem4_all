#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define MOD 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    ll test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        ll n, k;
        cin >> n >> k;
        vector <ll> arr(n);
        for(ll i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<ll,ll> frqncy;

        for(ll i : arr){
            frqncy[i]++;
        }
        arr.clear();
        for(auto i : frqncy ){
            arr.push_back(i.first);
        }
        n = arr.size();
        k = min(k,n);
        vector <vector<ll>> dp(n+1,vector<ll>(k+1,0));
        for(ll i = 0; i <= n; i++){
            dp[i][0] = 1;
        }
        for(ll i = 1;i <= n; i++){
            for(ll j = 1; j <= k; j++){
                dp[i][j] = dp[i-1][j] + ( dp[i-1][j-1]*frqncy[arr[i-1]]) % MOD;
                dp[i][j] %= MOD;
            }
        }
        ll ans = 0;
        for(ll i = 0; i <= k; i++){
            ans += dp[n][i];
            ans %= MOD;
        }
        cout << ans  << endl;
    }

    return 0;
}