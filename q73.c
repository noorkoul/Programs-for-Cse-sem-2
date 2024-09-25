//Program in C to write into a text file (Write your name)

#include<stdio.h>

int main() {
    char *filename = "file.txt";
    FILE *F = fopen("file.txt", "w");
    char name[20] = "Noor";

    if(F == NULL) {
        printf("Error; could not open file %s\n", filename);
        return 1;
    }

    //this displays name in file
    fprintf(F, "%s\n", name);
    
    fclose(F);

    return 0;
}
