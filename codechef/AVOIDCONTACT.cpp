#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int x,y;
        cin >> x >> y;
        if(y == 0){
            cout << x << endl;
        }
        else if(x == y){
            cout << 2*y - 1 << endl;
        }
        else{
            cout << x + y << endl;
        }
    }
    return 0;
}