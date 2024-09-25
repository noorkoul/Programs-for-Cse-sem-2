//Program in C to display contents of a character array

#include<stdio.h>

int main() {

    char arr[5] = {'a', 'b', 'c', 'd', '\0'};
    int i = 0;
    printf("The elements of the chracter array are: ");
    while (arr[i] != '\0') {
        printf("%c\t", arr[i]);
        i++;
    }

    return 0;
}
