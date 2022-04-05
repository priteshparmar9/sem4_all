#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        double n;
        cin >> n;
        n = pow(0.143 * n, n);
        if(n - (int)n >= 0.5){
            cout << (int)(n + 1) << endl;
        }
        else{
            cout << (int)(n) << endl;
        }
    }
    return 0;
}