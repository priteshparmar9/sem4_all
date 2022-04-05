#include<iostream>
using namespace std;
int main()
{
    int test_cases, ans, temp, height, n;
    cin >> test_cases;
    while(test_cases--){
        cin >> n >> height;
        ans = 0;
        while(n--){
            cin >> temp;
            if(temp > height){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}