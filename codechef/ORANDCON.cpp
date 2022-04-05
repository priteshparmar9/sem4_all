#include <bits/stdc++.h>
using namespace std;

int nrearest_1s(int n)
{
    int temp = 1;
    while (temp < n)
    {
        temp *= 2;
    }
    return temp;
}

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        int temp = nrearest_1s(n);
        if(n == 1){
            cout << 0 << " " << 1 << " " << 3 << endl;
        }
        else if ((temp - 1)!= n)
        {
            cout << 0 << " " << n << " " << temp*2 - 1 << endl;
        }
        else{
            cout << 0 << " " << n<< " " << temp*2 - 1 << endl;
        }
       
    }
    return 0;
}