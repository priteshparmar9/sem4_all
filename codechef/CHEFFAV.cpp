#include<bits/stdc++.h>
using namespace std;
bool is_chef(string str, int n){
    for(int i = n; i < n + 4; i++){
        if(str[i] == 'c' && str[i+1] == 'h' && str[i+2] == 'e' && str[i+3] == 'f'){
            return true;
        }
    }
    return false;
}

bool is_code(string str, int n){
    for(int i = n; i < n + 4; i++){
        if(str[i] == 'c' && str[i+1] == 'o' && str[i+2] == 'd' && str[i+3] == 'e'){
            return true;
        }
    }
    return false;
}
int main()
{
    int test_cases, n;
    string str;
    cin >> test_cases;
    while(test_cases--){
        cin >> n>>str;
        bool is_true = false, code = false;
        for(int i = 0; i < n - 5; i++ && !is_true){
             if(is_chef(str, i) && !code){
                is_true = false;
                break;
            }
            else if(is_chef(str,i) && code){
                is_true = true;
                break;
            }
            else if(is_code(str,i)){
                code = true;
            }
        }
        if(is_true){
            cout << "AC" << endl;
        }
        else{
            cout << "WA" << endl;
        }
    }
    return 0;
}