//Program to input a string from user and display it in reverse order

#include<stdio.h>

int main() {

    char arr[100];
    int i;

    printf("Enter string: ");
    scanf("%s", &arr);

    printf("The reversed string is: ");
    for (i = 0; arr[i] != '\0'; i++);

    while (i >= 0) {
        printf("%c", arr[i]);
        i--;
    }

    return 0;
}
