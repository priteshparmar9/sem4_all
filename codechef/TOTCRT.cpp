#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, n, temp;
    string s;
    cin >> test_cases;
    while(test_cases--){
        cin >> n;
        map <string,int> tot_correct;
        
        for(int i = 0; i < n*3 ; i++){
            cin >> s >> temp;
            tot_correct[s] += temp;
        }
        
        vector <int> ans;

        for(auto it:tot_correct){
            ans.push_back(it.second);
        }

        sort(ans.begin(), ans.end());

        for(auto i:ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}