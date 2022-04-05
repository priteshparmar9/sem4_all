#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        long long n;
        cin >> n;
        if(n%2){
            cout << "0" << endl;
        }else{
            int temp = 0;
            while(n%2 != 1 && n){
                n /= 2;
                temp++;
            }
            cout << temp << endl;
        }

    }
    return 0;
}