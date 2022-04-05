#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int x,a,b, temp;
        cin >> x >> a >> b;
        temp = sqrt((x*a)*(x*a) - 4*a*b*x);
        cout << temp;
        if(temp*temp != (x*a)*(x*a) - 4*a*b*x){
            cout << "-1" << endl;
        }
        else{
            cout << (-(x*a)+temp)/(2*a) << " " << (-(x*a)-temp)/(2*a) << endl;  
        }
    }
    return 0;
}