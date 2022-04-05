#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        int ans = 2;
        for(int i = 2; i <= sqrt(n - 1); i++){
            if((n- 1) % i == 0){
                if(i * i == (n-1)){
                    ans++;
                }
                else{
                    ans+=2;
                }
            }
        }
        if(n == 2){
            ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}