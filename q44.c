//Program to check whether string is palindrome or not

#include <stdio.h>
int main() {
   
   char a[30];
   int i, j, flag = 1;

   printf("Enter string: ");
   scanf("%s", &a);

   for (i = 0; a[i] != '\0'; i++);

   j = 0;
   i--;

    while (j < i) {
        if (a[j]!= a[i]) {
            printf("The string is not a palindrome.\n");
            flag = 0;
            break;
        }
        j++;
        i--;
   }
   if (flag == 1) {
    printf("The string is a palindrome.\n");
   }

   return 0;
}
