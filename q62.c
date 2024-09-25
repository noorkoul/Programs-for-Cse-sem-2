//Program in C to store details of all the students of class in an array of structure and then display the same in a tabular format

#include<stdio.h>

struct student {
    int rollno;
    float marks_obt;
    float total_marks;
};

int main() {
    struct student s[100];
    int n, i;

    printf("Enter the number of students in the class: ");
    scanf("%d", &n);
    
    // Input details for each student
    for(i=0; i<n; i++){
        printf("Enter the details for student %d \n", i+1);
        printf("Roll number: ");
        scanf("%d", &s[i].rollno);
        printf("Marks obtained: ");
        scanf("%f", &s[i].marks_obt);
        printf("Enter the total marks: ");
        scanf("%f", &s[i].total_marks);
    }

    //Display details
    printf("Roll Number \t Marks Obtained \t Total Marks\n");
    for (i = 0; i < n; i++) {
        printf("%d \t\t %.2f \t\t\t %.2f\n", s[i].rollno, s[i].marks_obt, s[i].total_marks);
    }
}
