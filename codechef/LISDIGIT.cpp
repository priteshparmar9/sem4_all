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
        int temp, n;
        cin >> n;
        for(int i = 0; i< n; i++){
            cin >> temp;
            cout << temp;
        }
        cout << endl;
    }
    return 0;
}