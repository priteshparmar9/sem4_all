#include<iostream>

using namespace std;

void heapify(long arr[], long n, long i)
{
    long largest = i; // Initialize largest as root
    long l = 2 * i + 1; // left = 2*i + 1
    long r = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (l < n && arr[l] > arr[largest])
        largest = l;

    // If right child is larger than largest so far
    if (r < n && arr[r] > arr[largest])
        largest = r;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// main function to do heap sort
void heapSort(long arr[], long n)
{
    // Build heap (rearrange array)
    for (long i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // One by one extract an element from heap
    for (long i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);

        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}


int main()
{
    long test_cases, n, k, temp;
    bool printed = false;
    cin >> test_cases;
    while(test_cases--){
        printed = false;
        cin >> n >> k;
        long arr[n];
        for(long i = 0; i < n; i++){
            cin >> arr[i];
        }
        heapSort(arr,n);
        if(arr[n-1] == (n-1)){
            cout << n + k<< endl;
        }
        else{
            temp = 0;
            int i = 0;
            while(true){
                if(temp == arr[i]){
                    temp++;
                }
                else{
                    if(k > 0){
                        k--;
                        temp++;
                    }
                    else{
                        cout << temp << endl;
                        printed = true;
                        break;
                    }
                }
            }
            
        }
    }
    return 0;
}