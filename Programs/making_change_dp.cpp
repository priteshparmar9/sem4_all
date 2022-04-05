#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int test_cases = 1;
    while(test_cases--){
        int d[4] = {-1,1,4,6};
        int c[4][9];
        for(int i = 1; i < 4; i++){
            c[i][0] = 0;
        }
        for(int i = 1; i < 4; i++){
            for(int j = 1; j < 9; j++){
                if(i==1 && j < d[i]){
                    c[i][j] = 1e8;
                }
                else if(i==1){
                    c[i][j] = 1+c[i][j-d[i]];
                }
                else if(j < d[i]){
                    c[i][j] = c[i-1][j] ;                   
                }
                else{
                    c[i][j] = min(c[i-1][j], 1+c[i][j-d[i]]);
                }
                cout << c[i][j] << " ";
            }
            cout << endl;
        }

    }
    return 0;
}