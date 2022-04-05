#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, n, ans, temp;
    cin >> test_cases;
    while(test_cases--){
        ans = 0;
        cin >> n;
        int arr[101] = {0};
        while(n--){
            cin >> temp;
            arr[abs(temp)]++;
        }
        if(arr[0] != 0){
            ans++;
        }
        for(int i = 1; i < 101; i++){
            if(arr[i] > 2){
                ans += 2;
            }
            else{
                ans += arr[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}