#include <stdio.h>
int main (){
    int i,n,s;
    printf("enter a number:");
    scanf("%d",&n);
    s=0;
    for ( i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
        
    }
    printf("s=%d",s);
    return 0;
}
