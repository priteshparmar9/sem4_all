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
        ll n, k, m;
        cin >> n >> k >> m;
        map <char, int> inp;
        string sol;
        char temp;
        for(char i = '0'; i <= '9'; i++){
            inp[i] = 0;
        }

        for(int i = 0; i < n; i++){
            cin >> temp;
            inp[temp]++;
        }

        map <int,string> formula;

        for(int i = 0; i < 10; i++){
            int n = i * k;
            string s = "";
            while(n >= 0){
                s += (char)((n % 10) + '0');
                n /= 10;
                if(n == 0){
                    break;
                }
            }
            formula[i] = s;
        }

        while(m--){
            for(char i = '0'; i <= '9'; i++){
                string s = formula[i - '0'];
                int n = inp[i];
                inp[i] = 0;
                for(int i = 0; i < s.length(); i++){
                    
                }




            }
        }
    }
    return 0;
}