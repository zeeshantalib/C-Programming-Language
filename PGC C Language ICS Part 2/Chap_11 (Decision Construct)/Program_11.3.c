#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("Enter first number");
	scanf("%d",&a);
	printf("Enter second number");
	scanf("%d",&b);
	printf("Enter third number");
	scanf("%d",&c);
	max=a;
	if(b>max)
	max=b;
	if(c>max)
	max=c;
	printf("The maximum number is %d",max);
}
