//program in C to find factorial of a number using recursion

#include <stdio.h>

long int fact(int n);

int main() {
   
   int n;

   printf("Enter a positive number: ");
   scanf("%d", &n);

   if (n < 1) {
      printf("You have entered a negative number\n");
      return -1;
   }

   fact(n);
   printf("The factorial of %d is %ld\n", n, fact(n);


}

long int fact(int n) {
   if (n > 1) {
     return n * fact(n-1);
   } else {
      return 1;
   }
}
