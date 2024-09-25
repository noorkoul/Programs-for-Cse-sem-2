//Program to compare three number using nesting of if-else
#include <stdio.h>

int main() {

   int num1, num2, num3;

   printf("Enter first number: ");
   scanf("%d", &num1);
   printf("Enter second number: ");
   scanf("%d", &num2);
   printf("Enter third number: ");
   scanf("%d", &num3);

    if (num1 == num2 && num2 == num3) {
        printf("All three numbers are equal: %d\n", num1);
    } else if (num1 == num2) {
        if (num1 > num3) {
            printf("Two numbers are equal and the largest: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num3);
        }
    } else if (num1 == num3) {
        if (num1 > num2) {
            printf("Two numbers are equal and the largest: %d\n", num1);
        } else {
            printf("The largest number is: %d\n", num2);
        }
    } else if (num2 == num3) {
        if (num2 > num1) {
            printf("Two numbers are equal and the largest: %d\n", num2);
        } else {
            printf("The largest number is: %d\n", num1);
        }
    } else {
        if (num1 >= num2) {
            if (num1 >= num3) {
                printf("The largest number is: %d\n", num1);
            } else {
                printf("The largest number is: %d\n", num3);
            }
        } else {
            if (num2 >= num3) {
                printf("The largest number is: %d\n", num2);
            } else {
                printf("The largest number is: %d\n", num3);
            }
        }
    }

  

   return 0;
}
