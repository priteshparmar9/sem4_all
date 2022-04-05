#include<bits/stdc++.h>
using namespace std;

string XOR(string s1, string s2){
    string temp = "";
    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == s2[i]){
            temp += '0';
        }
        else{
            temp += '1';
        }
    }
    return temp;
}

int count(string s){
    int a = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            a++;
        }
    }
    return a;
}

int main()
{
    int test_cases, n, k;
    string s;
    cin >> test_cases;
    while(test_cases--){
        cin >> n >> k >> s;
        vector <string> a;
        string temp = "";
        for(int j = 0; j < k; j++){
                temp += s[j];
        }
        string op = temp;
        for(int i = 1; i <= n - k; i++){
            temp = "";
            for(int j = i; j < i + k; j++){
                temp += s[j];
            }
            op = XOR(op,temp);
        }
        cout << count(op) << endl;
    }
    return 0;
}