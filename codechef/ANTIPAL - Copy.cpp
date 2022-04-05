    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int test_cases, n;
        cin >> test_cases;
        while(test_cases--){
            cin >> n;
            if(n % 2){
                cout << "-1" << endl;
            }
            else{
                string s ="";
                for(int i = 0; i < n/2; i++){
                    cout << "1";
                }
                for(int i = 0; i < n/2; i++){
                    cout << "0";
                }
                cout << endl;
            }
        }
        return 0;
    }