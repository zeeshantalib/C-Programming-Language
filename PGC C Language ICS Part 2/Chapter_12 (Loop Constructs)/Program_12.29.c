#include<stdio.h>
void main()
{
    int n,c;
	long int sum;
	sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(c=1;c<=n;c++)
	sum=sum+ (c*c);
	printf("sum is %d \n",sum);	
}
