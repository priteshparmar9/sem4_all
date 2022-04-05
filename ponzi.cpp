#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int find(int n){
    int i = 1;
    while(1){
        if(pow(2,i) - 1 >= n){
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        int tot_levels = find(n);
        if(pow(2,tot_levels) - 1 == n){
            // cout << n - pow(2,tot_levels - 1) ;
        }
        else{
            int left_out = n -  pow(2,tot_levels - 1) - 1;
            if(left_out <= pow(2,tot_levels - 2) ){
                po
            }
        }
    }
    return 0;
}