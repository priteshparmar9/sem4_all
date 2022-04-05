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
        vector <pair<int,int>> vec;
        int j = 0;
        vector<int>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        vec.push_back({v[0],1});
        for(int i = 1; i < v.size(); i++){
            if(v[i] ==v[i-1]){
                vec[j].second++;
            }
            else{
                j++;
                vec.push_back({v[i],1});
            }
        }

        int m = 1;
        for(int i = 0; i < vec.size() - 1; i++){
            if(abs(vec[i].first - vec[i+1].first) == 1){
                int temp1 = vec[i].first - vec[i+1].first;
                int temp2 = vec[i].second;
                int j = i;
                while (vec[j].first - vec[j + 1].first == temp1 && j < vec.size() - 1){
                    j++;
                    temp2 += vec[j].second;
                    temp1 *= -1;
                }
                m = max(m, temp2);
            }
            m = max(m, vec[i].second);
        }
        m = max(m, vec[vec.size()-1].second);
        cout << m << endl;
    }
    return 0;
}