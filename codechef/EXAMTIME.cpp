#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0, arr[6];
    cin >> test_cases;
    while(test_cases--){
        for(int i = 0; i < 6; i++){
            cin >> arr[i];
        }
        if(arr[0] + arr[1] + arr[2] > arr[3] + arr[4] + arr[5]){
            cout << "Dragon" << endl;
        }
        else if(arr[0] + arr[1] + arr[2] < arr[3] + arr[4] + arr[5]){
            cout << "Sloth" << endl;
        }
        else{
            if(arr[0] > arr[3]){
                cout << "Dragon" << endl;
            }
            else if(arr[3] > arr[0]){
                cout << "Sloth" << endl;
            }
            else if(arr[1] > arr[4]){
                cout << "Dragon" << endl;
            }
            else if(arr[1] < arr[4]){
                cout << "Sloth" << endl;
            }
            else{
                cout << "TIE" << endl;
            }
        }
    }
    return 0;
}