//Program in C to display the series n n-1 n-2 ... 3 2 1 (using loops)

#include <stdio.h>

int main() {
   
   int i, n;

   printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = n; i >= 1; i--) {
        printf("%d\t", i);
    }

   return 0;
}
