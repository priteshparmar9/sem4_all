#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while (test_cases--)
    {
        int n, arr[9], swaps = 0;
        cin >> n;
        for (int i = 0; i < 9; i++)
        {
            cin >> arr[i];
        }

        // For 1st line...

        arr[0] += arr[3];
        int temp = arr[3];
        swaps += arr[3];
        if(temp <= arr[1]){
            arr[4] += arr[1];
            arr[1] -= temp;
        }
        else{
            temp -= arr[1];
            arr[4] += arr[1];
            arr[1] = 0;
            arr[5] += arr[2];
            arr[2] = 0;
        }

        arr[0] += arr[6];
        swaps += arr[6];
        temp = arr[6];
        arr[6] = 0;
        arr[7] += arr[1];
        arr[8] += arr[2];

        swaps += arr[7];

        cout << swaps << endl;

    }
    return 0;
}