#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, n, s = 0;
    const int max = 100, min = 1;

    srand(time(NULL));
    random_number = (rand() % (max - min + 1)) + min;

    printf("welcome to  Number Guessing Game\n");
    printf("enter number between 1 and 100:\n");

    while (1) {
        scanf("%d", &n);       
        s++;
        if (n < min || n > max) {
            printf("enter number between 1 and 100");
         }
        else
           if (random_number > n) {
              printf("too low\n");
        } 
        else 
           if (random_number < n) {
              printf("too high\n");
        }
        else {
            printf("congratulation you find the number:%d in: %d times\n", random_number, s);
            break;
        }
    }

    return 0; 
}
