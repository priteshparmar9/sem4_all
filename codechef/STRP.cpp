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
        int n, count = 0;
        string s;
        cin >> n >> s;
        int i = 0;
        while(i < n ){
            if(s[i] == s[i+1]){
                i++;
            }
            count++;
            i++;
        }
        cout << count << endl;
    }
    return 0;
}