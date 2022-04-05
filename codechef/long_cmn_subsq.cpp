#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    if (n == 1)
    {
        cout << ans[0];
    }
    else if (n == 2)
    {
        cout << ans[1];
    }
    else if (n == 3)
    {
        cout << max(ans[0] + ans[1], max(ans[1] + ans[2], ans[0] + ans[2]));
    }
    else
    {
        vector<int> sol(n);
        sol[0] = ans[0];
        sol[1] = ans[0] + ans[1];
        sol[2] = max(ans[0] + ans[1], max(ans[1] + ans[2], ans[0] + ans[2]));
        for (int i = 3; i < n; i++)
        {
            sol[i] = max(sol[i - 1], max(sol[i - 3] + ans[i] + ans[i - 1], sol[i - 2] + ans[i]));
        }
        cout << *(sol.end() - 1);
    }
    return 0;
}   