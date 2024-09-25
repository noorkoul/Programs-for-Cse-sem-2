//Program in C to check if a string is a palindrome or not using pointers

#include<stdio.h>

int main() {
    char str[50], *p, *q;

    printf("Enter string: ");
    scanf("%s",str);

    p = str;
    q = p;

    while (*p != '\0') {
        p++;
    }    
    p--;

    while (q < p) {
            if(*p != *q)
            {
                printf("%s is not a palindrome.\n", str);
                return 0;
            }
            q++, p--;
    } 

    printf("%s is a palindrome.\n", str);       
    
    return 0;
}
