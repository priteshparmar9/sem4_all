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
        int n, ans = 1;
        string s;
        cin >> n >> s;
        for(int i = 1; i < n; i++){
            if(s[i] != s[i-1]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}