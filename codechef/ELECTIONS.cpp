#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a > 50){
            cout << "A" << endl;
        }
        else if(b > 50){
            cout << "B" << endl;
        }
        else if(c > 50){
            cout << "C" << endl;
        }
        else{
            cout << "NOTA" << endl;
        }
    }
    return 0;
}