#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    long modulo = 1000000007;
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        ll n, k;
        cin >> n >> k;
        ll arr[n+1], sum = 0;
        for(int i = 1; i <= k; i++){
            arr[i] = 1;
        }
        sum = k;
        for(int i = k + 1; i <= n; i++){
            arr[i] = sum;
            sum = (sum%modulo + arr[i]%modulo)%modulo;
            sum = (sum%modulo - arr[i-k]%modulo)%modulo;
        }
        
        cout << arr[n] % modulo << endl;
    }
    return 0;
}