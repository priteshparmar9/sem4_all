#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool if_possible(string s1, string s2){
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '#' && s1[i] == s2[i]){
            return false;
        }
    }
    return true;
}

int func(string s1, string s2){
    int len = s1.length();
    string arr[2];
    arr[0] = s1, arr[1] = s2;

    int t1 = len, t2 = len;

    for(int i = 0; i < len; i++){
        if(s1[i] == '#'){
            t1 = i;
            break;
        }
    }
    for(int i = 0; i < len; i++){
        if(s2[i] == '#'){
            t2 = i;
            break;
        }
    }
    int lane = 0;
    if(t1 == len || t2 == len){
        return 0;
    }
    if(t1>t2){
        lane = 0;
        int switches = 0;

        for(int i = 0; i < len; i++){
            if (arr[lane][i] == '#'){
                switches++;
                lane ^= 1;
            }
        }
        return switches;
    }
    lane = 1;
    int switches = 0;
    for(int i = 0; i < len; i++){
        if(arr[lane][i] == '#'){
        // cout << "Inside this...";
            switches++;
            if(lane == 0){
                lane = 1;
            }
            else{
                lane = 0;
            }
        }
    }
    return switches;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    cin >> test_cases;
    while(test_cases--){
        string str1, str2;
        cin >> str1 >> str2;
        if(!if_possible(str1, str2)){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
            cout << func(str1,str2) << endl;
        }
    }
    return 0;
}