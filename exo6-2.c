#include <stdio.h>
double sum(int N){
    double s;
    s=0;
    for(int i=1 ; i<=N ; i++){ 
        s+=1.0/i;
    }
    return s;
}
int main(){
    int N;
    printf("enter a number :");
    scanf("%d",&N);
    double result;
    result=sum(N);
    printf("sum=%f",result);
    return 0;
}
