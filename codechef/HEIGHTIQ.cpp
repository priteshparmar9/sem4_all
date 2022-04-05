#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, ans = 0;
        cin >> n;
        vector <int> height(n),iq(n);
        for(int i = 0; i < n; i++){
            cin >> height[i];
        }
        for(int i = 0; i < n; i++){
            cin >> iq[i];
        }
        vector <int> dp(n,1);
        for(int i = 1; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(height[i] > height[j] && iq[i] < iq[j]) {
	                dp[i] = max(dp[i], dp[j] + 1);
	            }
	        }
	        ans = max(ans, dp[i]);
	    }
        
	    cout << ans << endl;
    }
    return 0;
}
