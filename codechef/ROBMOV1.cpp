#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int h = 0, v = 0;
        int ans = 0;
        char hor,ver;
        if(x1 < x2){
            h = x2 - x1;
            hor='E';
        }
        else{
            h = x1 - x2;
            hor='W';
        }
        if(y1 < y2){
            v = y2 - y1;
            ver='N';
        }
        else{
            v = y1 - y2;
            ver='S';
        }
        cout << h + v << endl;
        for(int i = 0; i < h; i++){
            cout << hor;
        }
        for(int i = 0; i < v; i++){
            cout << ver;
        }
        cout << endl;
    }
    return 0;
}