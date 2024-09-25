//Program in C to find roots of a quadratic equation

#include <stdio.h>
#include<math.h>
int main() {
   
   double a, b, c, d, root1, root2, realPart, imaginaryPart;

   printf("Enter value of a: ");
   scanf("%lf", &a);
   printf("Enter value of b: ");
   scanf("%lf", &b);
   printf("Enter value of c: ");
   scanf("%lf", &c);

   if (a == 0) {
    printf("You have not enetered a quadratic equation.");
   } else {
    d = b * b - 4 * a * c;    //calculate discriminant
   }

   if (d > 0) {               //two real and distinct roots
    root1 = (-b + sqrt(d)) / (2 * a);
    root2 = (-b - sqrt(d)) / (2 * a);
    printf("Roots are real and distinct\n");
    printf("Root 1 = %lf\n", root1);
    printf("Root 2 = %lf\n", root2);
   } else if ( d == 0) {      //two real and equal roots
    root1 = root2 = -b / (2 * a);
    printf("Roots are real and equal\n");
    printf("Root 1 = Root 2 = %lf\n", root1);
   } else {                   //complex roots
    realPart = -b / (2 * a);
    imaginaryPart = sqrt(-d) / (2 * a);
    printf("Roots are complex and distinct\n");
    printf("Root 1 = %lf + %lf\n", realPart, imaginaryPart);
    printf("Root 2 = %lf - %lf\n", realPart, imaginaryPart);
   }
   
   return 0;
}
