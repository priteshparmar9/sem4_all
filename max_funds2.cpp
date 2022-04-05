#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int test_cases = 1;
    while (test_cases--)
    {
        int n, t1, t2, p;
        cin >> n;
        int arr[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int res[n + 1] = {0};
        cin >> p;
        vector<vector<int>> vector_vect;
        while (p--)
        {
            cin >> t1 >> t2;
            res[t1] = 1;
            res[t2] = 1;
            // add_to_vector(vector_vect, t1, t2);
        }
        // vector<int, greater<int> >::iterator itr;
        int ans = -1;
        for (int i = 0; i < vector_vect.size(); i++)
        {
            int temp = 0;
            // for (itr = vector_vect[i].begin(); itr != vector_vect[i].end(); itr++)
            // {
                // temp += arr[*itr];
            // }
            if(temp > ans){
                ans = temp;
            }
        }
        cout << ans;
    }
    return 0;
}