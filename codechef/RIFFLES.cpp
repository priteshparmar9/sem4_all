#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test_cases, n, k;
    cin >> test_cases;
    while(test_cases--){
        cin >> n >> k;
        long long *arr = new long long(n);
        long long *temp = new long long(n);

        for(long long i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        if(n > 2){
            k %= (n - 2);
        }
        while(k--){
            long long j = 0;
            for(long long i = 0; i < n; i+= 2){
                temp[j] = arr[i];
                j++;
            }
            for(long long i = 1; i < n; i+= 2){
                temp[j] = arr[i];
                j++;
            }
            for(long long i = 0; i < n; i++){
                arr[i] = temp[i];
            }
        }
        for(long long i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}