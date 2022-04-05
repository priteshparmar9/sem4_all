#include<bits/stdc++.h>
using namespace std;

// int max(int a, int b){
//     if(a > b){
//         return a;
//     }
//     return b;
// }

int main()
{
    vector <pair<int,int>> item = {
        {2,1},{3,2}, {4,5}, {5,6}
    }; // <weight, profit>

    cout << "Weight and Profit : " << endl;
    for(int i = 0; i < 4; i++){
        cout << item[i].first << " " << item[i].second << endl;
    }
    cout << "Maximum Capacity : 8 " << endl;

    int max_weight = 8;

    int T[5][max_weight + 1];

    for(int i = 0; i < max_weight+1; i++){
        T[0][i] = 0;
    }
    for(int i = 0; i < 5; i++){
        T[i][0] = 0;
    }

    for(int i = 1; i < 5; i++){
        for(int j = 1; j < max_weight + 1; j++){
            if(j >= item[i - 1].first){
                T[i][j] = max(T[i - 1][j], item[i - 1].second + T[i - 1][j - item[i - 1].first]);
            }
            else{
                T[i][j] = T[i - 1][j];
            }
        }
    }

    int sol_vector[5] = {0};

    int i = 4, j = 8;
    do{
        if(T[i][j] != T[i-1][j]){
            sol_vector[i] = 1;
            j = j - item[i-1].first;
        }
        i--;
        
    }while (i > 0&& j);

    cout << "Table  : \n";
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < max_weight + 1; j++){
            cout << T[i][j] << " ";
        }
        cout << endl; ;
    }

    cout << endl << "Solution Vector : \n";
    for(int i = 0; i < 5; i++){
        cout << sol_vector[i] << " ";
    }

    cout << endl << endl << "Maximum Profit : " << T[4][8];
    return 0;
}