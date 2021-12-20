#include<stdio.h>
void main()
{
     int n,c;
	 printf("enter an integer");
	 scanf("%d",&n);
	 for(c=10;c>=1;c--)
	 printf("%d * %d=%d \n",n,c,n*c);	
}
