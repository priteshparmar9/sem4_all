#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        long long n, x;
        cin >> n >> x;
        long long arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int temp = 0;
        for(int i = n - 1; i >= 0; i--){
            x -= arr[i];
            temp++;
            if(x <= 0){
                break;
            }
        }
        if(x > 0){
            temp = -1;
        }
        cout << temp << endl;
    }
    return 0;
}