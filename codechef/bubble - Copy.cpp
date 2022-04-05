#include <iostream>
using namespace std;

long count, s_count;

long BubbleSort(long array[], long num)
{
    count = 0;

    long i, j, min_idx;

    for (i = 0; i < num - 1; i++)
    {

        for (j = 0; j < num - i - 1; j++)
        {
            count++;
            if (array[j] > array[j + 1])
            {
                long temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    return count;
}
long BubbleSortSwap(long array[], long num)
{
    s_count = 0;

    long i, j, min_idx;

    for (i = 0; i < num - 1; i++)
    {

        for (j = 0; j < num - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                s_count++;
            }
        }
    }

    return s_count;
}

int main()
{
    long n;
    cin >> n;
    long arr[n];
    for (long i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    cout << BubbleSort(arr, n) << " comparisons for sorted array." << endl;

    for (long i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    cout << BubbleSortSwap(arr, n) << " swaps required." << endl;

    for (long i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
    cout << BubbleSort(arr, n) << " comparisons for reversed sorted array." << endl;

    for (long i = 0; i < n; i++)
    {
        arr[i] = n - i;
    }
    cout << BubbleSortSwap(arr, n) << " swaps required." << endl;

    for (long i = n - 1; i >= 0; i--)
    {
        arr[i] = rand();
    }
    cout << BubbleSort(arr, n) << " comparisons for average case." << endl;

    for (long i = n - 1; i >= 0; i--)
    {
        arr[i] = rand();
    }
    cout << BubbleSortSwap(arr, n) << " swaps required." << endl;

    return 0;
}