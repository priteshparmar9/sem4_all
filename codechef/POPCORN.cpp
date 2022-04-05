#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, a, b, temp;
    cin >> test_cases;
    while (test_cases--)
    {
        temp = 0;
        for(int i = 0; i < 3; i++){
            cin >> a >> b;
            if (a + b > temp)
            {
                temp = a + b;
            }
        }
        cout << temp << endl;
    }
    return 0;
}