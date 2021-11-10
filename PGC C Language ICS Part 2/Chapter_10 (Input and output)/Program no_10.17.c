#include<stdio.h>
void main()
{
      int a,b,c,d,sum,product;
      float average;
      printf("enter 4 numbers");
      scanf("%d %d %d %d",&a,&b,&c,&d);
      sum=a+b+c+d;
      product=a*b*c*d;
      average=sum/4;
      printf("sum =%d\n",sum);
      printf("product=%d\n",product);
      printf("average=%5.2f",average);
}
