#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isprime(int a){
    int i,isprime=1;
       for(i=2;i<=sqrt(a);i++) {
             if(a%i==0) 
                return 0;
             else
                 return 1;   
         }
}
int main(){
    int n;
    printf("enter number:");
    scanf("%d",&n);
     if(isprime(n)) 
         printf("the number is prime");
     else
        printf("is not prime");    
    return 0;
}