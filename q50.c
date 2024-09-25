//Program in C to find the transpose of a matrix

#include <stdio.h>
int main() {
   
   int rows, cols;

   //Getting the dimensions of the matrix
   printf("Enter number of rows: ");
   scanf("%d", &rows);
   printf("Enter number of columns: ");
   scanf("%d", &cols);

   int matrix[rows][cols];
   int transpose[cols][rows];

   //Getting the elements of the matrix
   printf("Enter the elements of the matrix row by row: \n");
   for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        printf("Element [%d][%d]: ", i, j);
        scanf("%d", &matrix[i][j]);
    }
   }
   
   //Printing the original matrix
   printf("The original matrix is:\n");
   for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
   }

   //Computing the transpose matrix
   for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
        transpose[j][i] = matrix[i][j];
    }
   }

   //Printing the transpose matrix
   printf("The transpose of the matrix is:\n");
   for (int i = 0; i < cols; i++) {
    for (int j = 0; j < rows; j++) {
        printf("%d ", transpose[i][j]);
    }
    printf("\n");
   }

   return 0;
}  
