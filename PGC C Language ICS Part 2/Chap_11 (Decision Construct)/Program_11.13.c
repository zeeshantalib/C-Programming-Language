#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a, &b, &c);
	if(a>b && a>c)
	printf("Maximum number is %d",a);
	else if(b>a && b>c)
	printf("Maximum number is %d",b);
	else
	printf("Maximum number is %d",c);
}
