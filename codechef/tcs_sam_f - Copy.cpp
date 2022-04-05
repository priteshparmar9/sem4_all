#include<bits/stdc++.h>
using namespace std;

int main()
{
    long sum = 0;
    int n;
    cin >> n;
    while(n--){
        long long x;
        cin >> x;
        long long str = (pow((1<<1), x));
        if(str > 99){
            str %= 100;
        }
        sum += str;
    }
    sum %= 100;
    cout << sum << endl;
    return 0;
}