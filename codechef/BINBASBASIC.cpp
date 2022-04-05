#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i = 0; i < n/2; i++ ){
            if(s[i] != s[n- i -1]){
                k--;
            }
        }
        if(k == 0){
            cout << "YES" << endl;
        }
        else if(k % 2 == 0 && n % 2 == 0 && k >= 0){
            cout << "YES" << endl;
        }
        else if(n % 2 == 1 && k >= 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
