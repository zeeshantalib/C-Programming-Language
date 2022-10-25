#include<stdio.h>
void main()
{
	int x=0;
	double sqroot=0.0;
	printf("Enter a number");
	scanf("%d",&x);
	if(x>=0)
	{
		sqroot=sqrt(x);
		printf("The square root of %d is= %1f",x, sqroot);
	}
	else
	printf("Invalid input");
}
