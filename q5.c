//Program in C to define and use a constant --> PI 3.14159
//Area and circumference of a circle

#include <stdio.h>
#define PI 3.14159

int main() {
   
   int r;

   printf("Enter the value of radius: ");
   scanf("%d", &r);

   float area = PI * r * r;
   float circumference = 2 * PI * r;

   printf("The area of the circle is %f\n", area);
   printf("The circumference of the circle is %f\n", circumference);

   return 0;
}
