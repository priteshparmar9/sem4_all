#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int a,b,c,p,q,r;
        cin >> a >> b >> c >> p >> q >> r;
        int total = p + q + r;
        if(total / 2 < a+b+c){
            cout << "YES" << endl;
        }
        else if(total / 2 < a+q+c){
            cout << "YES" << endl;
        }
        else if(total / 2 < p+b+c){
            cout << "YES" << endl;
        }
        else if(total / 2 < a+b+r){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}