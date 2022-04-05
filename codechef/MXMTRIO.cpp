#include <iostream>
using namespace std;
typedef long l;

int main()
{
    l test_cases, n, k;
    char temp;
    string s;
    cin >> test_cases;
    while (test_cases--)
    {
        cin >> n >> k >> s;

        while (k != 1)
        {
            for (int i = 0; i < k / 2; i++)
            {
                temp = s[i];
                s[i] = s[k - i - 1];
                s[k - i - 1] = temp;
            }
            k--;
        }
        cout << s << endl;
    }
    return 0;
}