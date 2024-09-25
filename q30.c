//Program to display use of break and continue keywords in C

#include<stdio.h>

int main() {

    int i;

//use of break
printf("Demonstrating use of break: ");
    for (i = 1; i <= 5; i++) {
        if (i == 2) 
            break;
            printf("%d\t", i);
    }  


//use of continue
printf("\nNow demonstrating use of continue: ");
    for (i = 1; i <= 5; i++) {
        if (i == 2) 
        continue;
        printf("%d\t", i);
    }    
 
    return 0;
}
