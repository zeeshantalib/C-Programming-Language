#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter two numbers:");
	scanf("%d %d",&x, &y);
	x>y? printf("%d is larger",x): printf("%d is larger",y);
}
