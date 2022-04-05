#include<bits/stdc++.h>
using namespace std;

int return_1s(int n){
    int temp = 0;
    while(n){
        if(n % 2){
            temp++;
        }
        n /= 2;
    }
    return temp;
}

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        cin >> n;
        int temp1 = 1, temp2 = 0;
        while(n){
            for(int i = temp1; 1 ; i++){
                if(!(return_1s(i) % 2)){
                    if(!(return_1s(temp2 ^ i) % 2)){
                        cout << i << " ";
                        n--;
                        temp1 = i + 1;
                        temp2 = temp2 ^ i;
                        break;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}