#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct planet{
    int raddi;
    int ang_velo;
};

struct co_ordinate{
    int x;
    int y;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n;
        planet pl_arr[3];
        for(int i = 0; i < 3; i++){
            cin >> pl_arr[i].raddi;
        }
        for(int i = 0; i < 3; i++){
            cin >> pl_arr[i].ang_velo;
        }
        cin >> n;
        co_ordinate ordinates[3];
        for(int i = 0; i < 3; i++){
            int left_time =(n*pl_arr[i].ang_velo) % 360;

            int theta = ((left_time*pl_arr[i].ang_velo)*22)/(7*360);
            ordinates[i].x = pl_arr[i].raddi*cos(theta);
            ordinates[i].y = pl_arr[i].raddi*sin(theta);


            // cout << ordinates[i].x << " " <<  ordinates[i].y << endl;
        }

        if((((float) ordinates[1].y - ordinates[0].y)/(ordinates[1].x - ordinates[0].x)) == (((float) ordinates[2].y - ordinates[1].y)/(ordinates[2].x - ordinates[1].x))){
            cout << "TRUE" <<endl;
        }
        else{
            cout << "FALSE" << endl;
        }




    }
    return 0;
}