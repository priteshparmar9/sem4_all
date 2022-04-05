#include<bits/stdc++.h>
using namespace std;
int main()
{
    long test_cases, t1, t2, r1, r2;
    cin >> test_cases;
    while(test_cases--){
        cin >> t1 >> t2 >> r1 >> r2;
        if( ((t1*t1) / (long double)(r1*r1*r1)) == ( (t2*t2) / (long double)(r2*r2*r2)))
        {
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}