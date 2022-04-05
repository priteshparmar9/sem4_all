
#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

//avoid space at the starting of the string in "move disk....."
long long toh(int N, int from, int to, int aux) {
    //Your code here
    if(N==1){
        printf("move disk %d from rod % to rod %d\n",N,from, to);
    }
    else{
        toh(N-1,from,aux,to);
        printf("move disk %d from rod % to rod %d\n",N,from, to);
        toh(N-1, aux,to,from);
    }
    return (1<<N)-1;
}


// { Driver Code Starts.

int main() {

    int T;
    scanf("%d", &T);//testcases
    while (T--) {
        long long moves = 0;
        int N;
        scanf("%d", &N);//taking input N
        
        //calling toh() function
        moves = toh(N, 1, 3, 2);
        printf("%ld\n", moves);
    }
    return 0;
}
