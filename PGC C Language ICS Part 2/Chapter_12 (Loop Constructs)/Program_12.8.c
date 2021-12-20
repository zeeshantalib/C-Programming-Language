#include<stdio.h>
void main()
{
	float c,r;
	c=2.0;
	r=1.0;
	while(c<=100)
	{
		r=r+1.0/c;
		c=c+2;
	}
	printf("result is %f",r);
}
