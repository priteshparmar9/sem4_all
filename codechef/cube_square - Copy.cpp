#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, inp;
    cin >> test_cases;
    while(test_cases--){
        cin >> inp;
        set<int> a;
        int i = 1;
        while(1){
            if(i * i <= inp){
                i++;
                a.insert(i*i);
            }
            else{
                break;
            }
        }
        i = 2;
        while(1){
            if(i * i * i <= inp){
                i++;
                a.insert(i*i*i);
            }
            else{
                break;
            }
        }
        cout << a.size() << endl;
    }
    return 0;
}