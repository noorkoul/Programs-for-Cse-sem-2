//Program in C to display the series 2 4 16 256 65536 ... upto n terms

#include <stdio.h>
#include<math.h>
int main() {
   
   int n;
    long int term = 2; // starting term

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%ld ", term);
        term = term * term; // Square the current term to get the next term
    }
    printf("\n");

   return 0;
}
