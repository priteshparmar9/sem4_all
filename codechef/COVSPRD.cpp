#include<bits/stdc++.h>
using namespace std;

long long factorial(long long n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main()
{
    long long test_cases, n, d, temp, t;
    cin >> test_cases;
    while(test_cases--){
        temp = 1;
        t = 1;
        cin >> n >> d;
        if(d > 10){
            temp = 1024;
            d -= 10;
        }
        else{
            temp = pow(2,d);
            d = 0;
        }
        if(d > 0){
            temp *= pow(3, d);
        }
        if(temp > n){
            temp = n;
        }
        cout << temp << endl;
    }
    return 0;
}