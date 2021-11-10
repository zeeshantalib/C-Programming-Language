#include<stdio.h>
void main()
{
	int a,b,y,z;
	a=b=y=z=1;
	b=a++;
	z=++y;
	printf("a=%d\n b=%d\n",a,b);
	printf("y=%d\n z=%d\n",y,z);
}
