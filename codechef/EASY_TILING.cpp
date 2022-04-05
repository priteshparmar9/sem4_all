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
        int n, mod = 1000000007;
        cin >> n;
        vector<vector<int>> v,k;
        v = {{1,0},{0,1}};
        k= {{0,1},{1,1}};
        if(n <= 2){
            cout << n << endl;
            continue;
        }
        n = n - 2;
        while(n){
            int a11,a12,a21,a22,b11,b12,b21,b22;
            if (n%2==1){
                a11=v[0][0], a12=v[0][1], a21=v[1][0], a22=v[1][1];
                b11=k[0][0], b12=k[0][1], b21=k[1][0], b22=k[1][1];
                v[0][0]=((a11*b11)%mod+(a12*b21)%mod)%mod, v[0][1]=((a11*b12)%mod+(a12*b22)%mod)%mod;
                v[1][0]=((a21*b11)%mod+(a22*b21)%mod)%mod, v[1][1]=((a21*b12)%mod+(a22*b22)%mod)%mod;
            }
            n=n/2;
            a11=k[0][0], a12=k[0][1], a21=k[1][0], a22=k[1][1];
            b11=k[0][0], b12=k[0][1], b21=k[1][0], b22=k[1][1];
            k[0][0]=((a11*b11)%mod+(a12*b21)%mod)%mod, k[0][1]=((a11*b12)%mod+(a12*b22)%mod)%mod;
            k[1][0]=((a21*b11)%mod+(a22*b21)%mod)%mod, k[1][1]=((a21*b12)%mod+(a22*b22)%mod)%mod;
        }
        cout << ((2*v[0][0])%mod + (3*v[0][1])%mod)%mod << endl;
    }
    return 0;
}