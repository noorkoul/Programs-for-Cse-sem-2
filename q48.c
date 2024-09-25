//Program in C to sort an integer array using bubble sort

#include <stdio.h>
int main() {
   
   int arr[100];
   int n, i, j, change;

   printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter the contents of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   for (i = 0; i < n-1; i++) {
    for (j = 0; j < n - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
            change = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = change;
        }
    }
   }
   printf("The sorted array: ");

   for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
   }
   printf("\n");

   return 0;
}
