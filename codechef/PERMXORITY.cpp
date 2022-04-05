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
        int n;
        cin >> n;
        if(n % 2){
            while(n--){
                cout << n << " ";
            }
            cout << endl;
        }
        else if(n == 2){
            cout << "-1" << endl;
        }
        else{
            cout << "2 3 1 4 ";
            for(int i = 5; i <= n; i++){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}