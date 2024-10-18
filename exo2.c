#include <stdio.h>
int main(){
    int a,b,r; //r:rest
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    while (a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
        /*
        e.g:
        a=b*c+r
        32=20*1+12
        20=12*1+8
        12=8*1+4
        8=4*2+0
        */
    }
    printf("the GCD is :%d",b);
    return 0;
}