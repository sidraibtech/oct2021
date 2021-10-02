#include<stdio.h>
//Programme for greater number
void main()
{
    int x,y,z,answer;
    printf("Enter any three different numbers");
    scanf("%d%d%d",&x,&y,&z);
    if(x>y && x>z)
    {
      answer=x;
    }
    else if (y>x&&y>z)
    {
      answer=y;
    }
    else
    {
       answer=z;
    }
    printf("The Greatest Number is %d",answer);
}
};
