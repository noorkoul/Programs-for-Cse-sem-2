//Program in C to display tables from 2 to 20 (using nesting of loops)

#include<stdio.h>
#include<math.h>

int main() {
    int i,j ;

    for (i = 2; i <= 20; i++) {
        for(j = 1; j<=10; j++) {
            printf("%d * %d = %d\n", i, j, i*j);
        };
    };
    

    return 0;
}
