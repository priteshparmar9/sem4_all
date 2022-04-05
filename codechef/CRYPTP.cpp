#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool flag;

void isEqual(vector<string> v, map<char, int> &mp, string res, vector<bool> &isDone, string unique, int k)
{
    if (k == unique.size())
    {
        int temp = 0;
        int val1 = 0;
        int val2 = 0;
        int support = 1;
        for (auto m : v)
        {
            for (int n = m.size() - 1; n >= 0; n--)
            {
                temp += mp[m[n]] * support;
                support *= 10;
            }
            val1 += temp;
            support = 1;
            temp = 0;
        }
        support = 1;
        for (int n = res.size() - 1; n >= 0; n--)
        {
            val2 += mp[res[n]] * support;
            support *= 10;
        }
        if (val1 == val2)
        {
            flag = true;
            cout << 1 << endl;
            exit(0);
        }
        return;
    }
    for(int m = 0;m < 10; m++)
    {
        if (!isDone[m])
        {
            isDone[m] = true;
            mp[unique[k]] = m;
            isEqual(v, mp, res, isDone, unique, k + 1);
            isDone[m] = false;
            mp[unique[k]] = -1;
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        vector <string> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        map <char,int>mp;
        for(auto &i:v){
            for(auto &j:i){
                mp[j]=-1;
            }
        }
        string res;
        cin >> res;
        for(auto &j:res){
            mp[j]=-1;
        }
        string unique;
        for(auto &i:mp){
            unique.push_back(i.first);
        }
        vector<bool> isDone(10,0);
        isEqual(v,mp,res,isDone,unique,0);
        if(!flag){
            cout << 0 << endl;
        }        
    }
    return 0;
}