#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, temp = 0, max = 0;
        cin >> n;
        char s[n];
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        sort(s,s+n);
        char prev = '\0';
        for(int i = 0; i < n; i++){
            if(prev != s[i]){
                temp = 1;
                prev = s[i];
            }
            else{
                temp++;
                if(max < temp){
                    max = temp;
                }
            }
            // cout << s[i] << " " << temp << endl;
        }
        if(max > n/2 || n % 2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            if(s[n/2 - 1] == s[n/2]){
                for(int i = 0; i < n/2; i++){
                    cout << s[i];
                }
                for(int i = n - 1; i >= n/2; i--){
                    cout << s[i];
                }
                cout << endl;
            }
            else{
                for(int i = 0; i < n; i++){
                    cout <<s[i];
                }
                cout << endl;
            }
        }
    }
    return 0;
}