//Program to input string from user and find its length (without using string library)

#include <stdio.h>
int main() {
   
   char arr[100];
    int i = 0;

    printf("Enter string: ");
    scanf("%s", &arr);
    
    while (arr[i] != '\0') {
        i++;
    }
    printf("The length of the string is %d\n", i);

   return 0;
}
