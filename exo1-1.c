
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool prime(int n){
    bool is_prime;
    is_prime=true;
    for (int i=2 ; i<=sqrt(n) ; i++){
        if(n%i==0){
            is_prime=false;
            return is_prime;
        }
    }

}
int main(){
    int a;
    printf("enter a number between 1 and 10^9:");
    scanf("%d",&a);
    if(prime(a)==false)
        printf("the number is not prime");
    else
        printf("is prime ");
    return 0;
}
