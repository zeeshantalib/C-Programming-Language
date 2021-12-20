#include<stdio.h>
void main()
{
	int n,c,f;
	c=1;
	f=1;
	printf("enter a number");
	scanf("%d",&n);
	while(c<=n)
	{
		f=f*c;
		c++;
	}
	printf("factorial of %d is %d",n,f);
}
