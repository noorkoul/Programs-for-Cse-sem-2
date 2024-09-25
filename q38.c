//Program in C to input an integer array from user and display the same

#include <stdio.h>
int main() {
   
   int i, n, arr[100];

   printf("Enter the number of elements of the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i <= n-1; i++) {
      scanf("%d", &arr[i]);
   }

   printf("The elements of the array are: ");
   for (i = 0; i <= n-1; i++) {
    printf("%d\t", arr[i]);
   }

   return 0;
}
