//Program in C to display grades of student

#include <stdio.h>
int main() {
   
   float mO, mM, p;

   printf("Enter marks obtained: ");
   scanf("%f", &mO);
   printf("Enter maximum marks: ");
   scanf("%f", &mM);

   p = (mO / mM) * 100;

   if (p >= 90) {
    printf("You have secured grade O!\n");
   } else if (p < 90 && p >= 80) {
    printf("You have secured grade A!\n");
   } else if (p < 80 && p >= 70) {
    printf("You have secured grade B!\n");
   } else if (p <70 && p >= 60) {
    printf("You have secured grade C!\n");
   } else if (p < 60 && p >= 40) {
    printf("You have secured grade D!\n");
   } else if (p < 40) {
    printf("You have failed!\n");
   }
   
   
   return 0;
}
