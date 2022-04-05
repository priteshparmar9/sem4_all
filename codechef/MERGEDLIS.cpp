#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

long double fun(long double n){
    if(n != 1){
        return n*fun(n-1);
    }
    else{
        return 1;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int test_cases = 0;
    // cin >> test_cases;
    // time_t start, end;
  
    /* You can call it like this : start = time(NULL);
     in both the way start contain total time in seconds 
     since the Epoch. */
    clock_t start, end;
  
    /* Recording the starting clock tick.*/
    start = clock();
  
    fun(5000);
    fun(5000);
  
    // Recording the end clock tick.
    end = clock();
  
    // Calculating total time taken by the program.
    double time_taken = double(end - start);
    cout << "Time taken by program is : " << fixed
         << time_taken << setprecision(5);
    cout << " sec " << endl;
    return 0;


    // while(test_cases--){
    //     int n,m, len1, len2, temp, start1, start2;
    //     cin >> n >> m;
    //     int arr1[n], arr2[m];
    //     for(int i = 0; i < n; i++){
    //         cin >> arr1[i];
    //     }
    //     for(int i = 0; i < m; i++){
    //         cin >> arr2[i];
    //     }
    //     temp = 1;
    //     len1= 0;
    //     for(int i = 1; i < n; i++){
    //         if(arr1[i] < arr1[i-1]){
    //             if(temp > len1){
    //                 len1 = temp;
    //                 temp = 1;
    //             }
    //         }
    //         else{
    //             temp++;
    //         }
    //     }

    // }
    return 0;
}