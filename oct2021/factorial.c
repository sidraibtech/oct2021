#include<stdio.h>  
void main()    
{    
 int i,n,factorial=1;    
 printf("Enter a number to find its factorial: ");    
 scanf("%d",&n);
 i=1;
 while(i<=n)
 {    
    factorial=factorial*i;
    i++;
  
 }    
  printf("The factorial of number %d is = %d",n,factorial);    
}   
