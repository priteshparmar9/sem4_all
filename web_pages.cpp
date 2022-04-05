#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<int> scanned;

bool find(vector<int> v, int n){
    for(int i = 0; i < (int)v.size(); i++){
        if(v[i] == n){
            return true;
        }
    }
    return false;
}

int ans(int source, int dest, vector<vector<int>> v, int a = 0){
    if(!find(scanned,source)){
        scanned.push_back(source);
        for(int i = 0; i < (int)v[source].size();i++){
            if(find(v[source],dest)){
                return ++a;
            }
        }
        int mini = 10000000;
        for(int i = 0; i <(int) v[source].size(); i++){
            int n = ans(v[source][i],dest,v,a);
            cout << " n : " << n << endl;
            if(n > 0){
            cout << " Inside this : " << source  << endl;
                mini = min(++n + a,mini);
            }
        }
        if(mini != 10000000){
            return mini;
        }
    }
    // cout << "Returned -1 for " << source << endl;
    return -1;
}


int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int n, t, source, dest;
        string s;
        cin >> n;
        getline(cin,s);
        
        vector<vector<int>> links;
        vector<int> temp;
        links.push_back(temp);
        for (int i = 0; i < n; i++)
        {
            getline(cin, s);
            temp.clear();
            for (int i = 0; i < (int)s.length(); i++)
            {
                if (s[i] != 32)
                {
                    t = s[i] - 48;
                    // cout << t << endl;
                    temp.push_back(t);
                }
            }
            links.push_back(temp);
        }
        cin >> source >> dest;
        cout << ans(source,dest, links);
    }
    return 0;
}