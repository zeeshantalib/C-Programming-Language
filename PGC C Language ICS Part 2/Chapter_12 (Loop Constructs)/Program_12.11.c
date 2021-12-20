#include<stdio.h>
void main()
{
	int c;
	c=1;
	do
	{
		printf("%d \t %d \n",c,c*c*c);
		c++;
	}
	while(c<=5);
}
