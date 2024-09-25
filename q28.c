//Program in C to display digits of a natural number in reverse order

#include<stdio.h>

int main() {
    int num, reversedNum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
