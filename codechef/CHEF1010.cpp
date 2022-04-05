#include<iostream>
using namespace std;
int main()
{
    int test_cases, n, temp_1, temp_2;
    string s;
    cin >> test_cases;
    while(test_cases--){
        temp_1 = 0, temp_2 = 0;
        cin >> n >> s;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                temp_1++;
            }
            else{
                temp_2++;
            }
        }
        if(temp_1 == 0 || temp_2 == 0){
            cout << 0 << endl;
        }
        else if(temp_1 > temp_2){
            cout << temp_2 - 1 << endl;
        }
        else{
            cout << temp_1 - 1 << endl;
        }
        

    }
    return 0;
}