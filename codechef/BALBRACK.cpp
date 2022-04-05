#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int start = 0, end = 0,n;
        string inp;
        cin >> n >> inp;
        for(int i = 0; i < n; i++){
            if(inp[i] == '('){
                start++;
            }
            else{
                end++;
            }
        }
        cout << min(start,end)*2 << endl;

    }
    return 0;
}
//((()())
