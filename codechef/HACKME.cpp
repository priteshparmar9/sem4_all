#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<int>> costArr(51, vector<int>(51, 0));
vector<vector<vector<int>>> dp(51, vector<vector<int>>(51, vector<int>(51, 0)));

int solve(string &s, int i, int j, int partitions)
{
    if (i >= j)
    {
        return 0;
    }
    if (dp[i][j][partitions] != 26)
    {
        return dp[i][j][partitions];
    }
    if (partitions == 0)
    {
        return dp[i][j][partitions] = costArr[i][j];
    }
    int ans = costArr[i][j];
    for (int k = i; k < j; k++)
    {
        int temp = costArr[i][k] + solve(s, k + 1, j, partitions - 1);
        ans = min(temp, ans);
    }
    return dp[i][j][partitions] = ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        for (int i = 0; i < 51; i++)
        {
            for (int j = 0; j < 51; j++)
            {
                for (int k = 0; k < 51; k++)
                {
                    dp[i][j][k] = 26;
                }
            }
        }
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, int> m;
        char mxc = 'z', mnc = 'z';
        int mx = -1, mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                m[s[j]]++;
                if (i == j)
                {
                    costArr[i][j] = 0;
                }
                else
                {
                    mxc = 'z';
                    mnc = 'z';
                    mx = -1;
                    mn = INT_MAX;
                    for (auto x : m)
                    {
                        if (x.second > mx)
                        {
                            mx = x.second;
                            mxc = x.first;
                        }
                        else if (x.second == mx)
                        {
                            mxc = min(x.first, mxc);
                        }
                        if (x.second < mn)
                        {
                            mn = x.second;
                            mnc = x.first;
                        }
                        else if (x.second == mn)
                        {
                            mnc = min(x.first, mnc);
                        }
                    }
                    costArr[i][j] = mxc - mnc;
                }
            }
            m.clear();
        }
        cout << (int)(solve(s, 0, s.length() - 1, k - 1)) << endl;
    }
    return 0;
}