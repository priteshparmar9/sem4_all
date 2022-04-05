#include<stdio.h>
int min(int x, int y){
    if(x > y){
        return y;
    }
    return x;
}
int main()
{
    int test_cases = 0;
    scanf("%d", &test_cases);
    while(test_cases--){
        int n, m;
        scanf("%d %d", &n, &m);
        int temp = min(n,m);
        if(temp % 2){
            printf("Rohan\n");
        }
        else{
            printf("Kshitij\n");
        }
    }
    return 0;
}