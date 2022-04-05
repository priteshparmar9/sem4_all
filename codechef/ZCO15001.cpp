#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 400;
int arry[N];

bool palindrome(int i, int j){
    while (i < j){
        if (arry[i] != arry[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n;
    cin >> n;
    int dp[n + 1];
    for (int i = 1; i <= n; i++){
        cin >> arry[i];
    }
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; i++){
        dp[i] = 1 + dp[i - 1];
        for (int j = i - 1; j > 0; j--){
            if (palindrome(j, i)){
                dp[i] = min(dp[i], 1 + dp[j - 1]);
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}