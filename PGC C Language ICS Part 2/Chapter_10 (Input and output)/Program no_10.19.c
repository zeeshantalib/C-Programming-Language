#include<stdio.h>
void main()
{
   int x,y,temp;
   printf("Enter two numbers");
   scanf("%d %d",&x,&y);
   printf("value in x is %d\n",x);
   printf("value in y is %d\n",y);
   temp=x;
   x=y;
   y=temp;
   printf("value in x after exchange is %d\n",x);
   printf("value in y after exchange is %d",y);
}
