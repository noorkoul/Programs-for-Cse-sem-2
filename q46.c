//Program in C to find the sum of all elements of an integer array

#include <stdio.h>
int main() {
   
   int a[100], n, i, sum = 0;
   printf("Enter the length of array: ");
   scanf("%d", &n);

   printf("Enter contents of array: ");
   for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
   }

   for (i = 0; i < n; i++) {
    sum = sum + a[i];
   }

   printf("The sum of the array elements is %d\n", sum);


   return 0;
}
