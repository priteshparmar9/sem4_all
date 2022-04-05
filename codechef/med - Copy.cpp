#include<bits/stdc++.h>
using namespace std;

int med(string x, string y, int m, int n){
    int arr[m+1][n+1];
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0)
                arr[i][j] = j;
            else if (j == 0)
                arr[i][j] = i;
            else if (x[i - 1] == y[j - 1])
                arr[i][j] = arr[i - 1][j - 1];
            else
                arr[i][j] = 1 + min(min(arr[i][j - 1], arr[i - 1][j]), arr[i - 1][j - 1]);
        }
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr[m][n];
}

int main()
{
    string x,y;
    cout << "Enter string 1 : ";
    cin >> x;
    cout << "Enter string 2 : ";
    cin >> y;

    cout << "MED: " << med(x,y,x.length(),y.length());
    return 0;
}