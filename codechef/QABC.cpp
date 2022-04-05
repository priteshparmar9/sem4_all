#include<iostream>
using namespace std;
int main()
{
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        } 
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        bool ans = true;
        for(int i = 0; i < n - 2; i++){
            if(b[i] < a[i]){
                ans = false;
                break;
            }
            else{
                int temp = b[i] - a[i];
                if(temp > 0){
                    a[i] += temp;
                    a[i+1] += ++temp;
                    a[i+2] += ++temp;
                }
                else if(temp < 0){
                    ans = false;
                    break;
                }
            }

        }
        if(!(a[n-2] == b[n-2] && a[n - 1] == b[n-1])){
            ans = false;
        }
        if(ans){
            cout << "TAK" << endl;
        }
        else{
            cout << "NIE" << endl;
        }
    }
    return 0;
}