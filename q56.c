//Program in C to search for an element in an integer array using functions

#include<stdio.h>

//function declaration
int search(int a[], int n, int x);

int main() {

    int a[50], n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the integer array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }    

    printf("Enter the number you want to search in the array: ");
    scanf("%d", &x);

    int d = search(a, n, x);   //function call

    if (d == -1) {
        printf("Not found\n");
    } else {
        printf("Element found at location %d\n", d);
    }
}

//Function definition
int search(int a[], int n, int x) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (x == a[i]) {
            flag = 1;
            return i+1;
        }
    }    
        if ( flag == 0) {
            return -1;   //-1 cannot be index
        }
    
}
