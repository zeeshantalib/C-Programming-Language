#include<stdio.h>
void main()
{
	int c,s,e;
	printf("enter starting number");
	scanf("%d",&s);
	printf("enter ending number");
	scanf("%d",&e);
	c=s;
	do
	{
		if(c%2!=0)
		printf("%d\n",c);
		c++;
	}
	while(c<=e);
}
