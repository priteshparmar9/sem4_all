#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coins[] = {1,4,6};
    int T[3][9]= {0};
    cout << "Available Coins: 1, 4, 6" << endl << "Total Ammount : 8" << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 1; j < 9; j++){
            if(i == 0){
                if(j < coins[i]){
                    T[i][j] = INT_MAX;
                }
                else{
                    T[i][j] = 1 + T[i][j - coins[0]];
                }
            }
            else{
                if(j < coins[i]){
                    T[i][j] = T[i-1][j];
                }
                else{
                    T[i][j] = min(T[i-1][j], 1+T[i][j-coins[i]]);
                }
            }
        }
    }

    cout << "Table : " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){
            cout << T[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Number of coins : " << T[2][8];

    return 0;
}