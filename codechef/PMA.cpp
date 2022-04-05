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
        int n, temp, ans = 0;
        bool flag = false;
        vector<int>odd,even;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(i % 2){
                odd.push_back(abs(temp));
            }
            else{
                even.push_back(abs(temp));
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        for(int i = 0; i < (int)even.size(); i++){
            ans += even[i];
        }
        for(int i = 0; i < (int)odd.size(); i++){
            ans -= odd[i];
        }
        cout << max(ans,ans+(2*(odd[(int)odd.size() - 1]-even[0] ))) << endl;
    }
    return 0;
}