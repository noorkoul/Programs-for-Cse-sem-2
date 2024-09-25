//Program in C to store details of all the students in class in an array of structure and then find the topper of the class

#include <stdio.h>

struct student {
    int rollno;
    float marks_obt;
    float total_marks;
    float percentage;
};

int main() {
    struct student s[100];
    int n, i;
    int topperIndex = 0; // To keep track of the topper index

    printf("Enter the number of students in the class: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the roll number of student %d: ", i + 1);
        scanf("%d", &s[i].rollno);

        printf("Enter the marks obtained by student %d: ", i + 1);
        scanf("%f", &s[i].marks_obt);

        printf("Enter the total marks for student %d: ", i + 1);
        scanf("%f", &s[i].total_marks);

        s[i].percentage = (s[i].marks_obt / s[i].total_marks) * 100;

        // Determine if this student is the topper
        if (s[i].percentage > s[topperIndex].percentage) {
            topperIndex = 1;
        }
    }

    // Display details of each student
    printf("\nRoll Number \t Marks Obtained \t Total Marks \t Percentage\n");
    for (i = 0; i < n; i++) {
        printf("%d \t\t %.2f \t\t\t %.2f \t\t  %.2f%%\n", s[i].rollno, s[i].marks_obt, s[i].total_marks, s[i].percentage);
    }

    // Output the topper details
    printf("\nTopper of the class:\n");
    printf("Roll Number: %d\n", s[topperIndex].rollno);
    printf("Marks Obtained: %.2f\n", s[topperIndex].marks_obt);
    printf("Total Marks: %.2f\n", s[topperIndex].total_marks);
    printf("Percentage: %.2f%%\n", s[topperIndex].percentage);

    return 0;
}
