#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n,t1,t2, ans = 0;
        vector<pair<int,int>> co_ordinates;
        double slope;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> t1 >> t2;
            co_ordinates.push_back(make_pair(t1,t2));
        }
        if(co_ordinates[1].first == co_ordinates[0].first){
            slope = INFINITY;
        }
        else{
            slope = (double)(co_ordinates[1].second - co_ordinates[0].second)/(co_ordinates[1].first - co_ordinates[0].first);
        }
        if(co_ordinates[1].first != co_ordinates[0].first || co_ordinates[1].second != co_ordinates[0].second){
            ans++;
        }
        for(int i = 1; i < n - 1; i++){
            if(((double)(co_ordinates[i+1].second - co_ordinates[i].second)/(co_ordinates[i+1].first - co_ordinates[i].first) != slope)){
                slope = (double)(co_ordinates[i+1].second - co_ordinates[i].second)/(co_ordinates[i+1].first - co_ordinates[i].first);
                ans++;
            }
        }
        if(co_ordinates[n-1].second != co_ordinates[0].second || co_ordinates[n-1].first != co_ordinates[0].first){
            if(((double)(co_ordinates[n-1].second - co_ordinates[0].second)/(co_ordinates[n-1].first - co_ordinates[0].first) != slope)){
                // slope = (double)(co_ordinates[i+1].second - co_ordinates[i].second)/(co_ordinates[i+1].first - co_ordinates[i].first);
                ans++;
            }
        }
        cout << ans;


    }
    return 0;
}