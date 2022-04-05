#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, temp;
    string s;
    cin >> test_cases;
    while(test_cases--){
        temp = 0;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'N'){
                temp++;
            }
        }
        if(temp == 1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}