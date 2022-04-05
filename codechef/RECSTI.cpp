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
        int n;
        cin >> n;
        map<int,int> sol;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sol[arr[i]]++;
            // cout << sol[arr[i]]<< endl;
        }
        int ans = 0, pairs = 0;
        for(pair<int,int> itr:sol){
            if(itr.second % 2){
                itr.second++;
                // cout << itr.first << endl;
                ans++;
            }
            pairs += itr.second / 2;
        }
        if(n == 1){
            cout << 3 << endl;
        }
        else if(n == 2){
            cout << 2 << endl;
        }
        else{
            if(pairs % 2 == 0){
                cout << ans << endl;
            }
            else{
                cout << ans + 2 << endl;
            }
        }
        
    }
    return 0;
}