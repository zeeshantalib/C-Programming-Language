#include<stdio.h>
void main()
{
     int n,sum,pro;
	 sum=0;
	 pro=1;
	 for(n=1;n<=10;n++)
	 {
	 	if(n%2==0)
	 	{
	 			pro=pro*n;
		 }
	 	else
	 	{
	 		sum=sum+n;
		 }
	 }
	 printf("sum of positive odd numbers %d \n",sum);
	 printf("product of positive even numbers %d",pro);	
}
