#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void sol(int arr[], int n, int sum){
    bool a[n+1][sum+1];
    for(int i = 0; i <= n; i++){
        a[i][0]= true;
    }
    for(int i = 1; i <= sum; i++){
        a[0][i]= false;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= sum; j++){
            if(j < arr[i-1]){
                a[i][j] = a[i-1][j];
            }
            else{
                a[i][j] = a[i-1][j] || a[i-1][j-arr[i-1]];
            }
        }
    }
    if(a[n][sum]){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sol(arr,n,sum);
    }
    return 0;
}