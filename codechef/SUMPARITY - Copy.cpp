#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, n, a;
    cin >> test_cases;
    while(test_cases--){
        cin >> n >> a;
        if(n == 1){
            if(a % 2){
                cout << "Odd" << endl;
            }
            else{
                cout << "Even" << endl;
            }
        }
        else if(a % 2){
            if(n % 2){
                cout << "Odd" << endl;
            }
            else{
                cout << "Even" << endl;
            }
        }
        else{
            cout << "Impossible" << endl;
        }
    }
    return 0;
}