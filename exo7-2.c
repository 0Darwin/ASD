#include <stdio.h>
int fact( int n){
    int f,s,i;
    f=1;
    s=0;
    for(i=1 ; i<=n ; i++){
        f=f*i;
        s=s+f;
    }
    return s;
}
int main(){
    int n,f;
    printf("enter a n:");
    scanf("%d",&n);
    f=fact(n);
    printf("%d",f);
    return 0;
}
