#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        float t1, t2;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        t1 = t2 = 0;
        sort(arr,arr+n);
        for(int i = 0; i < n -1; i++){
            t1 += arr[i];
        }
        t1 /= (n-1);
        t2 = arr[n - 1];
        printf("%0.6f\n", t1 + t2);
    }
    return 0;
}