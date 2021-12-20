#include<stdio.h>
void main()
{
     int n,c,f;
	 f=1;
	 printf("enter a number");
	 scanf("%d",&n);
	 for(c=1;c<=n;c++)
	 f=f*c;
	 printf("factorial of %d is %d",n,f);	
}
