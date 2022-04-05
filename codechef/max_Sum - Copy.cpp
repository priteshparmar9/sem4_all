#include <limits.h>
#include <iostream>
 
using namespace std;
int maxCrossingSubArray(int arr[], int low, int mid, int high)
{
    int sum = 0;
    int left_sum = INT_MIN;
    
    for (int i = mid; i >= low; i--)
    {
        sum += arr[i];
        if (sum > left_sum)
        {
            left_sum = sum;
        }
    }
 
    sum = 0;
    int right_sum = INT_MIN;
    for (int i = mid + 1; i <= high; i++)
    {
        sum += arr[i];
        if (sum > right_sum)
        {
            right_sum = sum;
        }
    }
    
    if ((left_sum > right_sum) && (left_sum > (left_sum + right_sum)))
    {
        return left_sum;
    }
    else if ((right_sum > left_sum) && (right_sum > (left_sum + right_sum)))
    {
        return right_sum;
    }
    else
        return (left_sum + right_sum);
}

int maximumSubArray(int arr[], int low, int high)
{
    if (low == high)
        return arr[low];
    int mid = (low + high) / 2;
 
    if (maximumSubArray(arr, low, mid) > maximumSubArray(arr, mid + 1, high) && (maximumSubArray(arr, low, mid) > maxCrossingSubArray(arr, low, mid, high)))
    {
        return maximumSubArray(arr, low, mid);
    }
    else if (maximumSubArray(arr, mid + 1, high) > maximumSubArray(arr, low, mid) && (maximumSubArray(arr, mid + 1, high) > maxCrossingSubArray(arr, low, mid, high)))
    {
        return maximumSubArray(arr, mid + 1, high);
    }
    else
        return maxCrossingSubArray(arr, low, mid, high);
}
int main()
{
    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int maximum_sum = maximumSubArray(array, 0, n - 1);
    cout << maximum_sum << endl;
    return 0;
}
