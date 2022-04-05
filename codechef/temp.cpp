#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test_cases = 1;
    while(test_cases--){
        int x = (int)('9' - '0')*5;
        cout << x;
        int t =char( (x)/10);
        int a = char((x)%10);
        x = (int)(a - '0')*5;
        cout << int(t) << int(a) << " " << x;
    }
    return 0;
}