#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;

int ans(vector <int> arr, int n, int t){
    int temp = arr[t], len = arr[t];

    for(int i = t - 1; i >= 0; i--){
        if(arr[i] >= temp){
            len += temp;
        }
        else{
            break;
        }
    }
    for(int i = t + 1; i < n; i++){
        if(arr[i] >= temp){
            len += temp;
        }
        else{
            break;
        }
    }
    return len;
}

int main()
{
    int test_cases = 1;
    while(test_cases--){
        int n, b, h, max = 0, total = 0;
        cin >> n >> b >> h;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            total += (arr[i] * b* h )% MOD;
        }
        for(int i = 0; i < n; i++){
            int temp = ans(arr,n, i);
            if(max < temp){
                max = temp;
            }
        }
        cout <<( total - ((max*b*h) % MOD)) % MOD;
    }
    return 0;
}