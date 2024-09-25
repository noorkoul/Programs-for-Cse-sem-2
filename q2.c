//Program in C to add 2 integers entered by user

#include<stdio.h>

int main() {
    int a, b, sum
    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    sum = a + b;

    printf("The sum of %d and %d is %d\n", a, b, sum);


    return 0;
}
