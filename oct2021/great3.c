#include<stdio.h>
//Programme for greater number
void main()
{
    int a,b,c,answer;
    printf("Enter three different numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)
    {
        answer=a;
    }
    else if (b>a&&b>c)
    {
         answer=b;
    }
    else
    {
        answer=c;
    }
    printf("Greatest Number is %d",answer);
}
