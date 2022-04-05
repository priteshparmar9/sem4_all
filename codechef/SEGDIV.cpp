#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, t1;
        cin >> n;
        n--;
        cout << "1 ";
        t1 = 2;
        int t2 = 1;
        for(int i = 1; i <= n; i++){
            if(i% 2 == 0){
                cout << t2 << " ";
                t2 += 2;
            }
            else{
                cout << t1 << " ";
                t1 += 2;
            }
        }
            cout << endl;
        
    }
    return 0;
}