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
        int n, max_frq = 0;
        cin >> n;
        vector<int> arr(n);
        map<int,int> frq;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            frq[arr[i]]++;
            if(frq[arr[i]] > max_frq){
                max_frq = frq[arr[i]];
            }
        }
        if(max_frq == n){
            cout << 0 << endl;
        }
        else{
            int ans = 0;
            while(max_frq < n){
                ans++;
                if(max_frq*2 <= n){
                    ans += max_frq;
                    max_frq *= 2;
                }
                else{
                    ans += (n - max_frq);
                    max_frq += (n - max_frq);
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}