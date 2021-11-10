#include<stdio.h>
void main()
{
	int a;
	a=5;
	printf("value of a=%d\n",a);
	a+=2;
	printf("value of a after a+=2 is %d\n",a);
	a-=2;
	printf("value of a after a-=2 is %d\n",a);
	a*=2;
	printf("value of a after a*=2 is %d\n",a);
	a/=2;
	printf("value of a after a/=2 is %d\n",a);
	a%=2;
	printf("value of a after a%%=2 is %d\n",a);
}
