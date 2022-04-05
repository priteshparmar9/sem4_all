#include<iostream>
using namespace std;

void Combine(int arr[], int p, int mid, int q){

    int i = p;
    int k = p;
    int j = mid + 1;
    int temp[q-p];

    while(i <= mid && j <= q){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while(i <= mid){
        temp[k] = arr[i];
        k++;
        i++;
    }
    while(j <= q){
        temp[k] = arr[j];
        k++;
        j++;
    }
}

void MergeSort(int arr[], int p, int q){
    
    if((q-p)/2 >= 1){
        MergeSort(arr, p, (q-p)/2);
        MergeSort(arr, ((q-p)/2)+1, q);
        Combine(arr, p, (q-p)/2, q);
    }
}

int main()
{
        
    int arr[10];
    for(int i = 0; i < 10; i++){
        arr[i] = 10 - i;
        cout << arr[i] << " ";
    }
    cout << endl;
    MergeSort(arr, 0, 9);
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }


    return 0;
}