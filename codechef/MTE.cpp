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
        vector<int> odd, even;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> temp;
            if(temp % 2){
                odd.push_back(temp);
            }
            else{
                even.push_back(temp);
            }
        }
        if(odd.size() && even.size()){
            int for_odd_parity = 0, for_even_parity = 0;
            vector <int> odd1, even1;
            odd1 = odd, even1 = even;
            if(odd1.size() % 2 == 0){
                for_even_parity = odd1.size() / 2;
            }
            

        }
        cout << ans << endl;
    }
    return 0;
}