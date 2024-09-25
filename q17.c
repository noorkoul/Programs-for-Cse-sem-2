//Program in C to find product of series 1 2 3 4 ... n

#include <stdio.h>
int main() {
   
   int n, product = 1;

   printf("Enter the value of n: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++) {
    product = product * i;
   }
   printf("The product is %d.\n", product);

   return 0;
}
