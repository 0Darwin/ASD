#include <stdio.h>
int arithmetic_series_sum(int N , int a , int d){
    if(N <= 0)
        return 0;
    else
        return ((N / 2) * (2 * a + (N - 1) * d));
}
int main(){
    int N,a,d,sum;
    // N :Number of term
    // a :first term
    // d :common difference
    printf("enter N:");
    scanf("%d",&N);
    printf("enter a:");
    scanf("%d",&a);
    printf("enter d:");
    scanf("%d",&d);
    sum=arithmetic_series_sum(N,a,d);
    printf("sum of the first %d term :%d",N,sum);
    return 0;
}
