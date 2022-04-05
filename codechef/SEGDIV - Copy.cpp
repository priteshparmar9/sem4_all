#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, t1;
        bool prev_odd = true;
        cin >> n;
        n--;
        cout << "1 ";
        t1 = 2;
        int t2 = 3;
        while(n--){
            if(prev_odd){
                cout << t1 << " ";
                t1 += 2;
                prev_odd = false;
            }
            else{
                cout << t2 << " ";
                t2 += 2;
                prev_odd = true;
            }
        }
            cout << endl;
        
    }
    return 0;
}