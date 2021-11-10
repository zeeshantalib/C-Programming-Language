#include<stdio.h>
void main()
{
	int a,b,c,d;
	a=b=c=d=0;
	a++;
	b=a;
	++c;
	d=c;
	printf("a=%d\n b=%d\n",a,b);
	printf("c=%d\n d=%d\n",c,d);
}
