#include<stdio.h>
void main()
{
    int num,m,n;
	long int f;
	printf("enter the ending integer");
	scanf("%d",&num);
	printf("\n integer \t factorial \n");
	for(m=1;m<=num;m++)
	{
		f=1;
		for(n=1;n<=m;n++)
		f=f*n;
		printf("%3d \t\t %6ld \n",m,f);
		}	
}
