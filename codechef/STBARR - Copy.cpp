#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, prev_num, max_ele, temp;
        bool equal;
        cin >> n;
        cin >> temp;
        prev_num = temp;
        max_ele = temp;
        equal = true;
        n--;
        while(n--){
            cin >> temp;
            if(max_ele <= temp){
                max_ele = temp;
                if(prev_num != temp){
                    equal = false;
                }
            }
        }
        if(equal){
            cout << 0 << endl;
        }
        else if(max_ele == temp){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}