#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        bool non_zero = false;
        ll n, k, m;
        cin >> n >> k >> m;
        vector<char> inp;
        vector<char> temp1;
        char temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            inp.push_back(temp);
            if(temp){
                non_zero = true;
            }
        }
        while (m-- && non_zero)
        {
            temp1.clear();
            for (int i = 0; i < inp.size(); i++)
            {
                int x = (int)(inp[i] - '0') * k;
                while (x >= 0)
                {
                    temp1.push_back((x % 10) + '0');
                    x /= 10;
                    if (x == 0)
                    {
                        break;
                    }
                }
            }
            inp = temp1;
        }
        if(non_zero){
        cout << inp.size() << endl;}
        else{
            cout << n << endl;
        }
    }
    return 0;
}