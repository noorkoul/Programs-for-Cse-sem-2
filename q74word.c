#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = NULL;
    char c;
    int word_count = 0;
    int in_word = 0;  // Flag to check if we are inside a word

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("The file could not be opened\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        if (isspace(c)) {
            in_word = 0;  // in whitespace, not inside a word
        } else if (in_word == 0) {
            // ncountered a non-whitespace character after whitespace, indicating a new word
            in_word = 1;
            word_count++;  // Increment the word count
        }
    }

    fclose(fp);  
    printf("The number of words in the file are %d\n", word_count);

    return 0;
}
