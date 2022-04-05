// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        // code here
        int ways = 0, temp;
        int dp[N+1][M*N +1];
         for(int i=0;i<=M*N;i++){
           dp[0][i]=0;
       }
       for(int i=0;i<=M*N;i++){
           if(i>=1&&i<=M)
              dp[1][i]=1;
           else
              dp[1][i]=0;
       }
       for(int i=2;i<=N;i++){
           for(int j=0;j<=N*M;j++){
               dp[i][j]=0;
               int k=1;
               while(k<=M&&j-k>=0){
                   dp[i][j]+=dp[i-1][j-k];
                   k++;
               }
           }
       }
        return dp[N][X];
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}  // } Driver Code Ends