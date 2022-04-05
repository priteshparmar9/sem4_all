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
        ll n, count_0 = 0, count_1 = 0;
        char s;
        cin >> n;
        for(int i =0 ; i < n; i++){
            cin >> s;
            if(s == '0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        if(n % 2){
            cout << "YES" << endl;
        }
        else{
            if(count_0 == count_1 || (count_0 % 2 == 0)){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}