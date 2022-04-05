#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, a, b;
        cin >> n >> a;
        b = n - a;
        if(a > b){
            cout << b << endl;
        }
        else{
            cout << a << endl;
        }
    }
    return 0;
}