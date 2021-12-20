#include<stdio.h>
void main()
{
    int n,s,e;
    printf("enter starting number");
    scanf("%d",&s);
    printf("enter ending number");
    scanf("%d",&e);
    n=s;
    while(n<=10)
    {
    	if(n%2==0)
    	printf("%d \n",n);
    	n++;
	}
}
