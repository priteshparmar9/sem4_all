#include<bits/stdc++.h>
using namespace std;

int char_to_int(char c){
    return c - 32;
}


int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        string a, s;
        cin >> a >> s;
        int i = a.size() - 1;
        int j = s.size() - 1;
        string ans = "";
        while(i <= j){
            if(char_to_int(a[i]) > char_to_int(s[j])){
                int temp = (char_to_int(s[j])) + (char_to_int(s[j - 1]) * 10);
                temp -= a[i];
                i--;
                j -= 2;
                ans = to_string(temp) + ans;
            }
            else{
                int temp = char_to_int(s[j]);
                temp -= a[i];
                i--;
                j--;
                ans = to_string(temp) + ans;
            }
        }
        if(i == j == 0){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}