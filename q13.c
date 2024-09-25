//Display series 1 2 3 4 5 ... n using loops

#include<stdio.h>

int main() {

    int i, n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\t", i);
    }

    return 0;
}
