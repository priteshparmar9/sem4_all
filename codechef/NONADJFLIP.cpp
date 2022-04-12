#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_1(string n, int s){
    for(int i = 0; i < s; i++){
        if(n[i] == '1'){
            return true;
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, ans = 0;
        string s;
        bool prev_changed = false;
        cin >> n >> s;
        while(is_1(s,n)){
            for(int i = 0; i < n; i++){
                if(s[i] == '1' && !prev_changed){
                    s[i] = '0';
                    prev_changed = true;
                }
                else{
                    prev_changed = false;
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}