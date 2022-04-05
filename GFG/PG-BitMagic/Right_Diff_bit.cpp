
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

string bin(int x){
    string s= "";
    while(x > 0){
        char t = '0'+(x % 2);
        s = t + s;
        x /= 2;
        if(x == 0){
            break;
        }
    }
    return s;
}

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        // cout << bin(m) << endl;
        string s1 = bin(m);
        string s2 = bin(n);
        if(s1.length() > s2.length()){
            int n = s1.length() - s2.length();
            string temp = "";
            while(n--){
                temp += '0';
            }
            s2 = temp + s2;
        }
        else{
            int n = s2.length() - s1.length();
            string temp = "";
            while(n--){
                temp += '0';
            }
            s1 = temp + s1;
        }
        for(int i = s1.length() - 1; i >= 0; i--){
            if(s1[i] != s2[i]){
                return s1.length() - i;
            }
        }
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends