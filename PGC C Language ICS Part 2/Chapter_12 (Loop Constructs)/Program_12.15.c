#include<stdio.h>
void main()
{
	int n,c;
	c=1;
	printf("enter a number");
	scanf("%d",&n);
	do
	{
		printf("%d*%d = %d\n",n,c,n*c);
		c++;
	}
	while(c<=10);
}
