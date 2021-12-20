#include<stdio.h>
void main()
{
	float c,r;
	c=3;
	r=1;
	do
	{
		r=r+1/c;
		c=c+2;
	}
	while(c<=99);
	printf("resulr is %f",r);
}
