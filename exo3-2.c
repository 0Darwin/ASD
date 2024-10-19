#include <stdio.h>
void fibonacci(int N ){
    int a,b,result;
    a=0;
    b=1;
    for ( int i = 0; i < N; i++)
    {
        printf("%d ",a);
        result=a+b;
        a=b;
        b=result;
    }
    
}
int main(){
    int N;
    printf("enter a number :");
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}
