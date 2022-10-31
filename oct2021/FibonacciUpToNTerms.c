#include <stdio.h>
void main() 
{
    int i, n, a= 0, b= 1, sumab;
    printf("Fibonacci Series till n terms: ");
    printf(" Enter the number");
    scanf("%d", &n);
    printf("Fibonacci Series up till n terms:");

    for (i = 0; i <= n; i++) 
    {
        printf("%d ",a);
        sumab = a + b;
        a = b;
        b = sumab;
    }
}
