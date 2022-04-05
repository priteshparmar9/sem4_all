#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(vector<int> &code, int n1, int &n2)
{
    if (!n1)
    {
        code.push_back(n2);
        return;
    }
    solve(code, n1 - 1, n2);
    n2 = n2 ^ (1 << (n1 - 1));
    solve(code, n1 - 1, n2);
}

vector<int> greycode(int n1)
{
    vector<int> code;
    int n2 = 0;
    solve(code, n1, n2);
    return code;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> code = greycode(n);
        for (int i = 0; i < (int)code.size(); i++)
        {
            cout << code[i] << " ";
        }
        cout << endl;
    }
    return 0;
}