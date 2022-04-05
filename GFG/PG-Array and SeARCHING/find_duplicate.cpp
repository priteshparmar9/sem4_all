// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        sort(arr,arr+n);
        int arr1[n+1] = {0};
        vector <int> ans;
        for(int i = 0; i < n; i++){
            arr1[arr[i]]++;
            if(arr1[arr[i]] == 2){
                ans.push_back(arr[i]);
                // cout << arr[i] << " ";
            }
        }
        if(ans.size() == 0){
            ans.push_back(-1);
        }
        return ans;


    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends