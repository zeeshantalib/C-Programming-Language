#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a, &b, &c);
	if(a==b)
	    if(a==c)
	    printf("All numbers are equal");
	    else
	    printf("Numbers are different");
	else
	printf("Numbers are different");
}
