#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool is_palin(string s){
    for(int i = 0; i <= s.length()/2; i++){
        if(s[i] != s[s.length() - i - 1]){
            return false;
        }
    }
    return true;
}

string sub_string(string s, int n, int m){
    string s1 = "";
    for(int i = n; i < m; i++){
        s1 += s[i];
    }
    return s1;
}

int add(string s, int n, int m){
    int count = 0;
    for(int i = 0; i <= m - n; i++){
        if(is_palin(sub_string(s, i, i + n))){
            count++;
        }
    }
    return count;
}

int main()
{
    int test_cases = 1;
    while(test_cases--){
        int n, m, ans = 0;
        string s;
        cin >> n >> s >> m;
        int arr[m];
        for(int i = 0; i < m; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < m; i++){
            ans += add(s, arr[i], n);           
        }
        cout << ans<< endl;
    }
    return 0;
}