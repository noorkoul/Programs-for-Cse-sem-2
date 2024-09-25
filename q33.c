//Program in C to display the following pattern

// **
// ***
// ****
// *****
// ******

#include <stdio.h>

int main() {
printf("Pattern: \n");
for (int i = 1; i <= 5; i++) {
   for (int j = 1; j <= i + 1; j++) {
    printf("*");
   }
   printf("\n");
}
return 0;
}
