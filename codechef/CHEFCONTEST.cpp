#include<iostream>
using namespace std;
int main()
{
    int test_cases, x, p, y, q;
    cin >> test_cases;
    while(test_cases--){
        cin >> x >> y >> p >> q;
        if(x + p*10 < y + q*10){
            cout << "Chef" << endl;
        }
        else if(x + p*10 > y + q*10){
            cout << "Chefina" << endl;
        }
        else{
            cout << "Draw" << endl;
        }
    }
    return 0;
}