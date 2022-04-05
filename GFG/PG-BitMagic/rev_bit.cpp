// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        string s = "";
        while(X > 0){
            char t = '0' + (X % 2);
            s = t + s;
            X /= 2;
            if(X == 0){
                break;
            }
        }
        if(s.length() != 32){
            int n = 32 - s.length();
            string x = "";
            while(n--){
                x += '0';
            }
            s = x + s;
        }
        // cout << s  << endl << s.length()<< endl;
        long long ans = 0;
        for(int i = 0; i < 32; i++){
            if(s[i] == '1'){
                ans += pow(2,i);
                // cout << "Inside";
            }
        }
        return ans;
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
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}  // } Driver Code Ends