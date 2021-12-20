#include<stdio.h>
void main()
{
	int c,sum;
	c=1;
	sum=0;
	while(c<=5)
	{
		printf("%d \n",c);
		sum=sum+c;
		c++;
	}
	printf("sum is %d",sum);
}
