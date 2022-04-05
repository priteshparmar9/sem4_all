#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        if(k == 0){
            cout << "-1" << endl;
        }
        else{
            if((n-k) % 2){
                ll temp = arr[0];
                arr[0] = arr[n - 1];
                arr[n - 1] = temp;
                for (int i = k; i < n - 1; i += 2)
                {
                    ll temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
            }
            else{
                for(int i = k; i < n; i+=2){
                    ll temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}