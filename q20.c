//Program to check whether a number is prime or not

#include <stdio.h>
#include <math.h>  // For sqrt function

int main() {
    int n, flag = 0; // Initialize flag

    printf("Enter a number to check if prime:\n");
    scanf("%d", &n);

    if (n <= 1) {
        flag = 1; // Not prime
    } else {
        for (int i = 2; i <= sqrt(n); i++) { // Check up to sqrt(n)
            if (n % i == 0) {
                flag = 1; // Not prime
                break; // Exit loop
            }
        }
    }

    if (flag == 0) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }

    return 0;
}
