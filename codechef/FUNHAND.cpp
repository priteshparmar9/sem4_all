#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, a, b;
        cin >> n >> a >> b;
        int maxi = max(a,b), mini = min(a,b);
        if(maxi - mini > 2){
            cout << 0<<endl;
        }
        else{
            int cards = 0;
            if(maxi - mini == 0){
                cout << 0<<endl;
            }
            else if(maxi - mini == 1){
                int out = 0;
                if(mini != 1){
                    out++;
                }
                if(maxi != n){
                    out++;
                }
                cout << out<<endl;
            }
            else if(maxi - mini == 2){
                cout << 1<<endl;
            }
            else{
                cout << 0<<endl;
            }
            
        }
    }
    return 0;
}