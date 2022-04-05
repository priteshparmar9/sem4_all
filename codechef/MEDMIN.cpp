#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        int ans = 0;
        cin >> n;
        int temp[n];
        for(int i = 0; i < n; i++){
            cin >> temp[i];
        }
        sort(temp, temp + n);
        ans = temp[n / 2] - temp[n / 2 - 1];
        if(ans < 0){
            ans *= -1;
        }
        cout << ans<< endl;
    }
    return 0;
}