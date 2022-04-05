#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases;
    string inp_str;
    cin >> test_cases;
    while(test_cases--){
        cin >> inp_str;
        string t1 = "", t2 = "";
        for(int i = 0; i < inp_str.length() / 2; i++){
            t1 += inp_str[i];
            t2 += inp_str[(inp_str.length()/2) + i];
        }
        if(t1 == t2 && (t1.length() + t2.length() ) == inp_str.length()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}