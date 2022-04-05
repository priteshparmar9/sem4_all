#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int a, b, c;
        cin >> b >> c;
        if(b % c == 0){
            a = 1;
        }
        else{
            a = lcm(b,c)/b;
        }
        cout << a << endl;
    }
    return 0;
}