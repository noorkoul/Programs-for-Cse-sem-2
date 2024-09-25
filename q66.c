//Program in C to display elements of an array using pointers

#include<stdio.h>

int main() {

    int arr[30], n;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    printf("Elements of the array are: { ");

    for (int i = 0; i < n; i++) {
        printf("%d ", *ptr++);
    }

    printf("}\n");
}
