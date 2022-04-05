#include<iostream>
using namespace std;
int main()
{
    int test_cases, x, y, z;
    cin >> test_cases;
    while(test_cases--){
        cin >> x >> y >> z;
        if(x+y > z){
            cout << "TRAIN" << endl;
        }
        else if(x + y == z){
            cout << "EQUAL" << endl;
        }
        else{
            cout << "PLANEBUS" << endl;
        }
    }
    return 0;
}