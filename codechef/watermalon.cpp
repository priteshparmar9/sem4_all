#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, w;
    cin >> test_cases;
    while(test_cases--){
        cin >> w;
        if(w % 2 == 0 && w > 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}