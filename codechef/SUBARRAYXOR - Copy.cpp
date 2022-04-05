#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 1;

    while(test_cases--){
        int n;
        cin >> n;
        int t = 1;
        for(int i = 2; i < n; i++){
            t = t ^ i;
        }
        cout << t ;
    }
    return 0;
}