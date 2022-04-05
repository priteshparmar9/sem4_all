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
        int tot_holidays, holidays = 8;
        cin >> tot_holidays;
        int arr[tot_holidays];
        for(int i = 0; i < tot_holidays; i++){
            cin >> arr[i];
            if(arr[i] % 7 != 0 && arr[i] % 7 != 6){
                holidays++;
            }
        }
        cout << holidays << endl;                
    }
    return 0;
}