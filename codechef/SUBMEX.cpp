#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n,x,k;
        cin >> n >> k >> x;
        if(k < x){
            cout << "-1" << endl;
        }
        else{
            int temp = 0;
            for(int i = 0; i < n; i++){
                if(temp >= x){
                    temp = 0;
                }
                cout << temp++ << " ";
            }
            cout << endl;
        }
    }
    return 0;
}