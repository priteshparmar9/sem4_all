#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, n, min, max, temp;
    cin >> test_cases;
    while(test_cases--){
        cin >> n;
        max = 0, min = INT_MAX;
        while(n--){
            cin >> temp;
            if(temp > max){
                max = temp;
            }
            if(temp < min){
                min = temp;
            }
        }
        cout << max - min << endl;
    }
    
    return 0;
}