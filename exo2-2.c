#include <stdio.h>
#include <math.h>
int arithmetic_series_sum(int N , int a , int r){
    if(N <= 0)
        return 0;
    else
        return a*((1-pow(r,N))/(1-r));
}
int main(){
    int N,a,r,sum;
    // N :Number of term
    // a :first term
    // r :the common ratio
    printf("enter N:");
    scanf("%d",&N);
    printf("enter a:");
    scanf("%d",&a);
    printf("enter r:");
    scanf("%d",&r);
    sum=arithmetic_series_sum(N,a,r);
    printf("sum of the first %d term :%d",N,sum);
    return 0;
}
