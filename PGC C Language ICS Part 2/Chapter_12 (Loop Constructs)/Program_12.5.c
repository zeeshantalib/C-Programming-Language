#include<stdio.h>
void main()
{
	int a,c;
	c=1;
	printf("enter a number");
	scanf("%d",&a);
	while(c<=10)
	{
		printf("%d*%d=%d \n",a,c,a*c);
		c++;
	}
}
