#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void add(vector<vector<int>> &vect, int t1, int t2)
{
    for (int i = 0; i < (int)vect.size(); i++)
    {
        if (binary_search(vect[i].begin(), vect[i].end(), t1))
        {
            if(!binary_search(vect[i].begin(), vect[i].end(),t2)){
                vect[i].push_back(t2);
                sort(vect[i].begin(), vect[i].end());
                return;
            }
            else{
                return;
            }
        }
        else if (binary_search(vect[i].begin(), vect[i].end(), t2) && !binary_search(vect[i].begin(), vect[i].end(), t1))
        {
            vect[i].push_back(t1);
            sort(vect[i].begin(), vect[i].end());
            return;
        }
    }
    vector<int> temp;
    temp.push_back(t1);
    temp.push_back(t2);
    sort(temp.begin(), temp.end());
    vect.push_back(temp);
}

void print(vector<int> n)
{
    for (int i = 0; i < (int)n.size(); i++)
    {
        cout << n[i] << " ";
    }
    cout << endl;
}

void print_arr(int arr[], int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int n, p, t1, t2;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        cin >> p;
        vector<vector<int>> vect;
        while (p--)
        {
            cin >> t1 >> t2;
            if (t1 != t2)
            {
                add(vect, t1, t2);
            }
        }
        int maxi = -1;
        for (int i = 0; i < (int)vect.size(); i++)
        {
            // print(vect[i]);

            int temp = 0;
            for (int j = 0; j < (int)vect[i].size(); j++)
            {
                temp += arr[vect[i][j]];
                // print_arr(arr,n);
            }
            if (temp > maxi)
            {
                maxi = temp;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (maxi < arr[i])
            {
                maxi = arr[i];
            }
        }
        cout << maxi;
    }
    return 0;
}