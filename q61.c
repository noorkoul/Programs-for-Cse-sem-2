//Program in C to store details of a student in a structure and display the same

#include<stdio.h>

struct student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct student s = {"Mariam", 57, 99};

    printf("Student Details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.rollNo);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
