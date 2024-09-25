//Program in C to search for an element in an integer array (linear search)

#include<stdio.h>

int main() {

    int a[100], n, i, found = 0, target;     // found is used as flag
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter the contents of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        if (a[i] == target) {
            printf("Element found at position %d\n", i + 1);
            found = 1;
        } 
    }
    if (found == 0) {
        printf("Element not found\n");
    }
    
    return 0;
}
