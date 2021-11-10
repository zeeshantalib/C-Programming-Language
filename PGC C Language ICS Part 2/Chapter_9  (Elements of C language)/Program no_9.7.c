#include<stdio.h>
void main()
{
	int a,b,f,g;
	a=b=f=g=0;
	b=a--;
	g=--f;
	printf("a=%d\n b=%d\n",a,b);
	printf("f=%d\n g=%d\n",f,g);
}
