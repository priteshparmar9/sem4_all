#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool is_r = false, is_b = false, is_g = false;
    int x = 2;
    char temp;
    while(x--){
        cin >> temp;
        if(temp == 'B'){
            is_b = true;
        }
        else if(temp == 'R'){
            is_r = true;
        }
        else{
            is_g = true;
        }
    }
    if(is_r){cout << "R" << endl;}
    else if(is_b){cout << "B" << endl;}
    else{
        cout << "G" << endl;
    }
    return 0;
}