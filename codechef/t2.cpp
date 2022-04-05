#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int a,b,c;
        cin >> a>>b>>c;
        cout <<((a|b)&(b|c)&(a|c));
    }
    return 0;
}