#include<stdio.h>
void main()
{
    int num,sum,m,n;
	printf("enter the ending integer");
	scanf("%d",&num);
	printf("\n integer \t sum \n");
	for(m=1;m<=num;m++)
	{
		sum=0;
		for(n=1;n<=m;n++)
		sum=sum+n;
		printf("%3d \t\t %3d \n",m,sum);
		}	
}
