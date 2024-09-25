//Program in C to find all the factors of a natural number

#include <stdio.h>


//main Program
int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);
    
    printf("Factors of %d are : \n", n);
    
    // finding and printing factors b/w 1 to num
    for(int i = 1; i <= n; i++)
    {
        // if n is divisible by i, then i is a factor of n
        if(n % i == 0)
            printf("%d \n", i);
    }
}
