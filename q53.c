//Program in C to find product of two matrices

#include<stdio.h>


int main() {

    int r1, c1, r2, c2;

    //input dimensions of the first matrix
    printf("Enter the number of rows and columns of the matrix respectively: ");
    scanf("%d%d", &r1, &c1);

    //input dimensions of the second matrix
    printf("Enter the number of rows and columns of the matrix respectively: ");
    scanf("%d%d", &r2, &c2);

    //ensure matrices can be multiplied
    if (c1 != r2) {
        printf("Error! The number of columns of the first matrix should be equal to the number of rows of the second matrix");
        return -1;
    }

    int matrix1[r1][c1], matrix2[r2][c2], result[r1][c2];

    //input elements of the first matrix
    printf("Enter elements of the first matrix: ");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    //input elements of the second matrix
    printf("Enter elements of the second matrix: ");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    //initialize the result to 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    //multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    //output the result matrix
    printf("Resultant matrix: \n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
