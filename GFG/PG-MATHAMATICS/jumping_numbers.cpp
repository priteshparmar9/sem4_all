#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

string long_to_str(long long x){
    string s = "";
    while(x >= 0){
        // cout << ".\n";
        int temp;
        temp = x % 10;
        x /= 10;
        char t = '0' + temp;
        s = t + s;
        // cout << s << endl;
        if(x == 0){
            break;
        }
    }
    // cout << s << endl;
    return s;
}


class Solution {
  public:
    long long jumpingNums(long long X) {
        // code here
        if(X % 10 == 0){
            
        }

    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.jumpingNums(X) << endl;
    }
    return 0;
}  // } Driver Code Ends