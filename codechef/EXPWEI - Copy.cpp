#include<iostream>
using namespace std;
int main()
{
    int test_cases, n;
    cin >> test_cases;
    while(test_cases--){
        cin >> n;
        int temp = 0, sum = 0;
        for(int i = 1; i <= n; i++){
            temp += i;
        }
        for(int i = 1; i <= n; i++){
            sum += i*temp;
        }
        sum /= n;
        cout << sum;
    }
    return 0;
}