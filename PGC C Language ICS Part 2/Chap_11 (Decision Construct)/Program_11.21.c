#include<stdio.h>
void main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	n%3==0? printf("Divisible by 3"): printf("Not divisible by 3");
}
