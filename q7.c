//Program in C to check whether a number is even or odd

#include <stdio.h>
int main() {
   
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n != 0) {
        printf("Number is even.\n");
    } else if (n % 2 != 0) {
        printf("Number is odd.\n");
    } else {
    printf("Number is zero.\n");
    };

   return 0;
}
