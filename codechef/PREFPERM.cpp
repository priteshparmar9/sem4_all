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
        ll k,n, prev = 0, temp;
        cin >> k >> n;
        ll arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        prev = 0;
        for(int i = 0; i < n; i++){
            temp = arr[i];
            while(prev != arr[i]){
                cout << temp-- << " ";
                prev++;
            }
        }
        cout << endl;
    }
    return 0;
}