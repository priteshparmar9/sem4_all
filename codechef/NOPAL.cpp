#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        while(n > 0){
            cout << "a";
            n--;
            if(n > 0){
                cout << "b";
                n--;
                if(n > 0){
                    cout << "c";
                    n--;
                }
            } 
        }
        cout << endl;
    }
    return 0;
}
//abcab