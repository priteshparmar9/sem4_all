#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_cases, n, m, x1, y1, x, y, tx, ty, t;
    cin >> test_cases;
    while(test_cases--){
        t = 0;
        tx = 1;
        ty = 1;
        cin >> n >> m >> x1 >> y1 >> x >> y;
        while(x1 != x && y1 != y){
            if(x1 + tx > n || x1 + tx < 1){
                tx *= -1;
            }
            if(y1 + ty > m || y1 + ty < 1){
                ty *= -1;
            }
            x1 += tx;
            y1 += ty;
            t++;
        }
        cout << t << endl;
    }
    return 0;
}