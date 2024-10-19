
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool prime(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    printf("enter number between 1 and 10^9: ");
    scanf("%d", &a);
    
    if (prime(a)) {
        printf("number is prime\n");
    } else {
        printf(" number is not prime\n");
    }
    
    return 0;
}