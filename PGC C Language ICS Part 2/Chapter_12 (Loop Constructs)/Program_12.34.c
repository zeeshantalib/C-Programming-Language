#include<stdio.h>
void main()
{
     int x,n,i;
	 long sum;
	 sum=0;
	 printf("enter value of x");
	 scanf("%d",&x);
	 printf("enter value of n");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 sum=sum + pow(x,i);
	 printf("sum=%d",sum);	
}
