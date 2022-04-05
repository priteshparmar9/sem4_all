#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    while(n--){char inp_cmp[3];
    char off[2];
    for(int i =0; i < 3; i++){
        cin >> inp_cmp[i];
    }
    cin >> off[0] >> off[1];
    for(int i = 0; i < 3; i++){
        if(inp_cmp[i] == off[0]){
            cout << off[0] << endl;
            break;
        }
        else if(inp_cmp[i] == off[1]){
            cout << off[1] << endl;
            break;
        }
    }}
    return 0;
}