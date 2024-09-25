//Program in C to swap two numbers using only two variables

#include <stdio.h>
int main() {
   
   int a, b;

   printf("Enter value of a: ");
   scanf("%d", &a);
   printf("Enter value of b: ");
   scanf("%d", &b);

   printf("Numbers before swapping are %d and %d\n", a, b);
   
   a = a + b;
   b = a - b;
   a = a - b;

   printf("Numbers after swapping are %d and %d\n", a, b);

   return 0;
}
