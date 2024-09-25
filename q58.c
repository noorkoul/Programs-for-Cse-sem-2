//Program in C to implement Ackerman function using recursion
/*
Ackerman fucntion:
            n+1                     if m = 0
 A(m,n) =   A(m-1, 1)               if m> 0 and n = 0
            A(m-1, A(m, n -1))       if m > 0 and n > 0


*/

#include<stdio.h>

int A(int, int);

int main() {
    
    int m, n;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int func = A(m, n);
    printf("The Ackerman function of %d and %d is : %d", m, n, func);


}

int A(int m, int n) {
    if (m == 0) {
        return n+1;
    } else if (m > 0 && n == 0) {
        return A(m-1, 1);
    } else if (m > 0 && n > 0) {
        return A(m - 1, A(m, n-1));
    }
}
