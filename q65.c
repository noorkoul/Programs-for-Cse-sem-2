//Swap 2 numbers a & b using functions and pointers (call by reference method)

#include<stdio.h>

void _swap(int *a, int *b);

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    printf("The numbers before swapping are %d & %d\n", x, y);
    
    _swap(&x, &y);
    printf("The numbers after swapping are %d & %d\n", x, y);
    return 0;
}

//call by reference
void _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
