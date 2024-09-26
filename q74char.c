//Program in C to find the number of characters in a text file

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;
    int count = 0;


    // Get the filename from the user
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file exists
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Read each character and count
    while ((ch = fgetc(file)) != EOF) {
        count++;
    }

    // Close the file
    fclose(file);

    // Display the number of characters
    printf("The file %s has %d characters.\n", filename, count);

    return 0;
}
