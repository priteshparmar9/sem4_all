#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        if(n % 2){
            cout << "YES" << endl;
            for(int i = 1; i <= n; i += 2){
                cout << i << " ";
            }
            for(int i = n - 1; i > 1; i -= 2){
                cout << i << " ";
            }
            cout << endl;
        }
        else{
            if(n == 2){
            cout << "NO" << endl;}
            else{
                for(int i = (n / 2) + 1; i <= n; i++){
                    cout << i << " ";
                }
                for(int i = n / 2; i >= 1; i--){
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}