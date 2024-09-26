#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = NULL;
    char c;
    int vowel_count = 0;


    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("The file could not be opened\n");
        exit(1);
    }

    
    while ((c = fgetc(fp)) != EOF) {
        c = tolower(c);  // Convert to lowercase for easier comparison

        // Check if the character is a vowel
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowel_count++;
        }
    }

    fclose(fp);  
    printf("The number of vowels in the file are %d\n", vowel_count);

    return 0;
}
