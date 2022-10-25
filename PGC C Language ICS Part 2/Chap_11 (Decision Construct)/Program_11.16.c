#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(!(n%2==0))
	printf("You entered odd number");
	else 
	printf("You entered even number");
}
