//Program in C to display contents of an integer array

#include <stdio.h>
int main() {
   
   int arr[4] = {1, 2, 3, 4};
   int i;

   for (i = 0; i <= 3; i++) {
    printf("%d\t", arr[i]);
   }

   return 0;
}   
