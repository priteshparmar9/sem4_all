#include <iostream>
using namespace std;

int count, s_count;

int SelectionSort(int array[], int num)
{
    count = 0;

    int i, j, min_idx;

    for (i = 0; i < num - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < num; j++)
        {
            count++;
            if (array[j] < array[i])
            {
                min_idx = j;
            }

            int temp = array[min_idx];
            array[min_idx] = array[i], array[i] = temp;
        }
    }
    return count;
}

int SelectionSorts_count(int array[], int num)
{
    s_count = 0;

    int i, j, min_idx;

    for (i = 0; i < num - 1; i++)
    {

        min_idx = i;
        for (j = i + 1; j < num; j++)
        {
            if (array[j] < array[i])
            {
                min_idx = j;
            }
        }
        s_count++;
    }

    return s_count;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    cout << SelectionSort(arr, n) << " comparisons for sorted array." << endl;
    cout << SelectionSorts_count(arr, n) << " swaps required." << endl;
    for (int i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
    cout << SelectionSort(arr, n) << " comparisons for reversed sorted array." << endl;
    cout << SelectionSorts_count(arr, n) << " swaps required." << endl;
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = rand();
    }
    cout << SelectionSort(arr, n) << " comparisons for average case." << endl;
    cout << SelectionSorts_count(arr, n) << " swaps required." << endl;
    return 0;
}