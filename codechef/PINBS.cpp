#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_cases;
    string s;
    cin >> test_cases;
    while(test_cases--){
        cin >> s;
        bool is_true = false;
        for(long long i = 0; i < s.size() - 1; i++){
            if(s[i] == '1'){
                is_true = true;
                break;
            }
        }
        if(is_true){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}