//Program to input a string from user and display the same (ask user's name)

#include<stdio.h>

int main() {

    char arr[30];
    int i = 0;

    printf("Enter name: ");
    scanf("%s", &arr);
    printf("The name is: ");
    while (arr[i] != '\0') {
        printf("%c", arr[i]);
        i++;
    }

    return 0;
}
