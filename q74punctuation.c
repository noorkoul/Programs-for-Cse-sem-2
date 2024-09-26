#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = NULL;
    char c;
    int punctuation_count = 0;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("The file could not be opened\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        if (ispunct(c)) {  // Check if the character is a punctuation mark
            punctuation_count++;
        }
    }

    fclose(fp);  
    printf("The number of punctuation marks in the file are %d\n", punctuation_count);

    return 0;
}
