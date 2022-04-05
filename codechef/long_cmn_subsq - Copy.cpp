#include<bits/stdc++.h>
using namespace std;

int lcs(string x, string y){
    int m = x.length();
    int n = y.length();
    int arr[m+2][n+2];
    cout << endl;
    for(int i = 0; i <= m; i++){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                arr[i][j] = 0;
            }
            else if(x[i-1] == y[j - 1]){
                arr[i][j] = 1 + arr[i-1][j-1];
            }
            else{
                arr[i][j] = max(arr[i-1][j],arr[i][j-1]);
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int ind = arr[m][n];
    char lcs[ind];
    for(int i = 0; i < ind ; i++){
        lcs[i] = '\0';
    }
    while(m > 0 && n > 0){
        if(x[m-1] == y[n-1]){
            lcs[ind-1]=x[m-1];
            m--;
            n--;
            ind--;
        }
        else if(arr[m-1][n] >= arr[m][n-1]){
            m--;
        }
        else{ 
            n--;
        }
    }
    cout<< "String : ";
    for(int i = 0; i < arr[x.length()][y.length()]; i++){
        cout << lcs[i];
    }
    cout << endl;
    return arr[x.length()][y.length()];
}

int main()
{
    string  x,y;
    cout << "Enter String x : ";
    cin >> x;
    cout << endl << "Enter String y : ";
    cin >> y;
    cout << endl << "Length of Longest Common Subsequence : " << lcs(x,y);
    return 0;
}