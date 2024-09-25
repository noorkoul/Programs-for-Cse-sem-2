//Program in C to swap two numbers using functions (call by value method)

#include<stdio.h>

void swap(int a, int b);

int main() {

    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The numbers before swapping are %d and %d\n", a, b);
    
    swap(a, b);

}

void swap(int a, int b) {
    
    int temp = a;
    a = b;
    b = temp;
    printf("The numbers after swapping are %d and %d\n", a, b);
}
