//Program in C to display sum of the series 1 + 1/2 + 1/4 + 1/6 + ... + 1/n

#include <stdio.h>

int main() {
   
   int i, n;
   double sum;

   printf("Enter value of n: ");
   scanf("%d", &n);
   
   sum = 1.0;
   for (i = 2; i <= n; i = i + 2) {
    sum = sum + 1.0 / i;
   };

   printf("The sum of the series is: %lf\n", sum);

   return 0;
}

// 1/2 = 0.5
//  1/4 = .25
// 1/6 = 0.16666667
// 1/8 = 0.125
// 1/10 = 0.1
