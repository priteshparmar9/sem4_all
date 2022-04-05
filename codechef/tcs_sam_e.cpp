#include<bits/stdc++.h>
using namespace std;

bool is_sq_fr(int n){
    int temp1 = n;
    for(int i = 2; i < temp1; i++){
        if(n % i == 0){
            int t = sqrt(i);
            if(t * t == i){
                return false;
            }
            t = sqrt(n/i);
            if(t*t == (n/i)){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int test_cases = 1;
    while(test_cases--){
        int n, ans;
        cin >> n;
        int temp1 = n, temp2;
        ans = 0;
        for(int i = 2; i < temp1; i++){
            if(n % i == 0){
                int n1 = sqrt(i);
                if(n1*n1 != i){
                    if(is_sq_fr(i)){ans++;}
                }
                n1 = sqrt(n/i);
                if(n1*n1 != n/i){
                    if(is_sq_fr(n/i)){ans++;}
                }
                temp1 = n / i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}