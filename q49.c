//Program in C to input a matrix from the user and display the same in matrix format
#include <stdio.h>
int main() {
   
   int a[10][10], i, j, m, n;
   printf("Enter number of rows: ");
   scanf("%d", &m);
   printf("Enter number of columns: ");
   scanf("%d", &n);

   printf("Enter the elements of the matrix row by row: ");
   for (i = 0; i <= m - 1; i++) {
    for (j = 0; j <= n - 1; j++) {
        scanf("%d", &a[i][j]);
    }
   }

   printf("The matrix is : \n");
   
   for (i = 0; i <= m - 1; i++) {
    for (j = 0; j <= n - 1; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
   }

   return 0;
}
