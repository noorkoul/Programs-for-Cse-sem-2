#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *fp = NULL;
    char c;
    int consonant_count = 0;

    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("The file could not be opened\n");
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        c = tolower(c);  
        if (isalpha(c) && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            consonant_count++;
        }
    }

    fclose(fp);  
    printf("The number of consonants in the file are %d\n", consonant_count);

    return 0;
}
