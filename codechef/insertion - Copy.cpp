#include <iostream>
using namespace std;

int count;
int InsertionSort(int array[], int num)
{
    count = 0;
    int j, key;
    for (int i = 1; i < num; i++)
    {
        key = array[i];
        j = i - 1;

        while (j >= 0 && key < array[j])
        {
            array[j + 1] = array[j];
            j = j - 1;
            count++;
        }
        if (j >= 0)
        {
            count++;
        }
        array[j + 1] = key;
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i;
    }
    cout << InsertionSort(arr, n) << " comparisons for sorted array." << endl;
    for(int i = 0; i < n; i++){
        arr[i] = n - i;
    }
    cout << InsertionSort(arr, n) << " comparisons for reversed sorted array." << endl;
    for(int i = n - 1; i >= 0; i--){
        arr[i] = rand();
    }
    cout << InsertionSort(arr, n) << " comparisons for average case." << endl;
    return 0;
}