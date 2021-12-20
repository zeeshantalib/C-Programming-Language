#include<stdio.h>
void main()
{
	int a,b,c,r;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	c=1;
	r=1;
	do
	{
		r=r*a;
		c++;
	}
	while(c<=b);
	printf("result is %d",r);
}
