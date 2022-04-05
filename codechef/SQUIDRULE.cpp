#include<iostream>
using namespace std;
int main()
{
    int test_cases, n, temp, min, sum;
    cin >> test_cases;
    while(test_cases--){
        sum = 0, min = 0;
        cin >> n;
        cin >> temp;
        min = temp;
        n--;
        while(n--){
            cin >> temp;
            if(min > temp){
                sum+= min;
                min = temp;
            }
            else{
                sum += temp;
            }
        }
        cout << sum << endl;
    }
    return 0;
}