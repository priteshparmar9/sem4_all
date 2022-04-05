#include<bits/stdc++.h>
using namespace std;

void MakeChange(int n){
    const int coins[] = {100,50,20,10,5,2,1};
    vector <int> ans;
    for(int i = 0; i < (sizeof(coins)/sizeof(coins[0])); i++){
        while(n >= coins[i]){
            ans.push_back(coins[i]);
            n -= coins[i];
        }
    }
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter amount for which you want to find changes: ";
    cin >> n;
    MakeChange(n);
    return 0;
}