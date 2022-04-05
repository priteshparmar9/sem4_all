#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

vector<int> SemiPrime(vector <int> arr){
    vector <int> arr2;
    for(int i = 0; i < arr.max_size(); i++){
        for(int j = i + 1; j < arr.max_size(); j++){
            arr2.push_back(i * j);
        }
    }
    // sort(arr2.begin(), arr2.end());
    // arr.erase(unique(arr2.begin(), arr2.end()), arr2.end());
    return arr2;
 
    // for (auto it = arr2.cbegin(); it != arr2.cend(); ++it) {
    //     cout << *it << ' ';
    // }
}

int main()
{
    int n;
    cin >> n;
    vector <int> arr;
    for(int i = 1; i < n; i++){
        if(isPrime(i)){
            arr.push_back(i);
        }
    }
    arr = SemiPrime(arr);

    for(int i = 0; i < arr.max_size(); i++){
        cout << arr[i] << " ";
    }



    return 0;
}



