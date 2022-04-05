#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        int n, m, p;
        cin >> n >> m >> p;
        for(int i = 1; i < n; i++){
            m = (m*p)/100;
        }
        cout << m;
    }
    return 0;
}