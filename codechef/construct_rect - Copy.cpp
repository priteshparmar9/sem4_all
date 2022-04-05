#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, x, y, z;
    cin >> test_cases;
    while(test_cases--){
        cin >> x >> y >> z;
        if(((x == y) && z % 2 == 0) || ((x == z) && y % 2== 0) || (y == z) && x % 2 == 0){
            cout << "YES" << endl;
        }
        else if(x + y == z || y + z == x || x + z == y){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}