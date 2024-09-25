//Program in C to demonstrate use of macros

#include<stdio.h>

#define PI 3.14
#define AREA(x) PI * x * x 

int main() {
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);

    printf("The area of the circle os %f\n", AREA(r));
}
