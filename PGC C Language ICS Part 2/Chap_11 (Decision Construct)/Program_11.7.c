#include<stdio.h>
void main()
{
	int y;
	printf("Enter a year");
	scanf("%d",&y);
	if(y%4==0)
	printf("%d is a leap year",y);
	else
	printf("%d is not a leap year",y);
}
