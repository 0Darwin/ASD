#include <stdio.h>
int sum_of_the_squares(int N ){
    int s,d;
    s=0;
    for ( int i = 0; i <= N; i++)
    {
        d=i*i;
        s=s+d;
    }
    return s;
}
int main(){
    int N;
    printf("enter a number :");
    scanf("%d",&N);
    printf("s=%d",sum_of_the_squares(N));
    return 0;
}
