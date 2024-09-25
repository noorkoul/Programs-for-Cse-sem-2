//Program in C to add and subtract two integers (a+b) (a-b) (b-a)

#include<stdio.h>

int add(int, int);
int sub(int, int);


int main() {
    int a, b, c;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    int sum = add(a,b);
    int diff = sub(a,b);
    int subRev = sub(b,a);


}

int add(int a, int b) {
    int c = a + b;
    printf("The sum is %d\n", c);

}

int sub(int a, int b) {
    int d = a - b;
    printf("The difference is %d\n", d);
}
