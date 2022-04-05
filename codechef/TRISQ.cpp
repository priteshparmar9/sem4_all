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
        int n, ans = 0, x = 0, y = 0;
        cin >> n;
        if((x+2)+(y+2)<=n){
            n /= 2;
            n--;
            ans = n*(n+1)/2;
        }
        cout << ans << endl;
    }
    return 0;
}