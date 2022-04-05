#include <iostream>
using namespace std;

int modulo(int n){
    if(n > 0){
        return n;
    }
    return n*(-1);
}

int Partition (int arr[], int p, int r)
{
  int x = arr[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++)
    {
      if (arr[j] <= x)
	{
	  i++;
	  int temp = arr[i];
	  arr[i] = arr[j];
	  arr[j] = temp;
	}
    }
  int temp = arr[i + 1];
  arr[i + 1] = arr[r];
  arr[r] = temp;
  return i + 1;
}

void QuickSort (int arr[], int p, int r)
{

  if (p < r)
    {
      int q = Partition (arr, p, r);
      QuickSort (arr, p, q - 1);
      QuickSort (arr, q + 1, r);
    }
}


int main(){
    int test_cases, n, k, w_s_f, w_f_f, w_s_b, w_f_b;
    cin >> test_cases;
    while(test_cases--){
        w_s_f = 0, w_f_f = 0, w_s_b = 0, w_f_b = 0;
        cin >> n >> k;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        QuickSort(arr, 0 , n - 1);
        for(int i = 0; i < k; i++){
            w_s_f += arr[i];
            w_s_b += arr[n - i - 1];
        }
        for(int i = k; i < n; i++){
            w_f_f += arr[i];
            w_f_b += arr[n - i - 1];
        }
        if(modulo(w_s_f - w_f_f) > modulo(w_s_b - w_f_b)){
            cout << modulo(w_s_f - w_f_f) << endl;
        }
        else{
            cout << modulo(w_s_b - w_f_b) << endl;
        }
        
    }
    return 0;
}