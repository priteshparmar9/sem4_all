#include<bits/stdc++.h>
using namespace std;

int cal(string s, int n,int ind,int t){
    int temp = 0;
    s[ind] = '0';
    // cout << s << " : ";
    for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                for(int j = i; j < t + i && j < n; j++){
                    if(s[j] == '0'){
                        if(j == i + t - 1){
                            i = j;
                            temp++;
                            break;
                        }
                    }
                    else{
                        break;
                    }
                }
            }
        }
        // cout << s << " \n";
        return temp;

}

int main()
{
    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        int n, t, temp, temp2;
        vector <int> ind;
        string s;
        cin >> n >> t;
        cin >> s;
        temp2 = temp = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                temp2++;
                ind.push_back(i);
            }
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                for(int j = i; j < t + i && j < n; j++){
                    if(s[j] == '0'){
                        if(j == i + t - 1){
                            i = i + t - 1;
                            temp++;
                        }
                    }
                    else{
                        break;
                    }
                }
            }
        }
        // cout << temp << endl;
        for(int i = 0; i < temp2; i++){
            // cout << temp << endl;
            int x;
            x = cal(s, n,ind[i], t);
            if(x > temp){
                temp = x;
            }
            // cout << temp << " ";
        }
        cout << temp << endl;
    }
    return 0;
}