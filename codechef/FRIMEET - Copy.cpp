#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int x1, x2;
        cin >> x1 >> x2;
        if(x1 >= x2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}