#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap(int &a, int &b){
    int temp = b;
    b = a;
    a = temp;
    return;
}

int *insertion_sort(int *arr, int n){
    for(int i= 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] > arr[j]){
                swap(*(arr+i), *(arr+j));
            }
        }
    }
    return arr;
}


int main()
{
    int test_cases = 1;
    while(test_cases--){
        int arr[10] = {1,5,10,2,3,10,8,9,11,4};
        insertion_sort(arr,10);
        for(int i = 0; i < 10; i++){
            cout << arr[i] << " ";
        }
    }
    return 0;
}