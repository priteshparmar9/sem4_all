#include<iostream>
using namespace std;

bool is_vovel(char a){
    if(a == 'a' || a == 'e' || 'a' == 'i' || a == 'o' || a == 'u'){
        return true;
    }
    return false;
}


int main()
{
    int test_cases, n, temp, arr[26] = {0}, temp2 = 0, vov, con;
    char c = '-', ans, vov1, con1;
    bool is_tie;
    string p, q;
    cin >> test_cases;
    while(test_cases--){
        is_tie = false;
        temp2 = 0, vov = 0, con = 0;
        cin >> n >> p;
        for(int i = 0; i < n; i++){
            cin >> q[i];
            if((p[i] == '?' || q[i] == '?') && !(p[i] == '?' && q[i] == '?')){
                if(p[i] == '?'){
                    arr[q[i] - 97]++;
                    if(arr[q[i] - 97] > temp2){
                        temp2 = arr[q[i] - 97];
                        is_tie = false;
                    }
                    if(arr[q[i] - 97] == temp2){
                        is_tie = true;
                    }
                    if(is_vovel(q[i])){
                        vov++;
                    }
                    else{
                        con++;
                    }
                }
                else{
                    arr[p[i] - 97]++;
                    if(arr[q[i]] > temp2){
                        is_tie = false;
                        temp2 = arr[q[i] - 97];
                        c = p[i];
                    }
                    if(arr[q[i]- 97] == temp2){
                        is_tie = true;
                    }
                    if(is_vovel(p[i])){
                        vov++;
                    }
                    else{
                        con++;
                    }
                }
            }
            if(is_tie){
                if(con > vov){
                     
                }
            }
        }
    }
    return 0;
}