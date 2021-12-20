#include<stdio.h>
void main()
{
	int c,num,f;
	c=1;
	f=1;
	printf("enter a number");
	scanf("%d",&num);
	do
	{
		f=f*c;
		c++;
	}
	while(c<=num);
	printf("factorial of %d is %d",num,f);
}
