#include<stdio.h>
void main()
{
     int x,num;
	 for(x=1;x<=5;x++)
	 {
	 	printf("enter a number");
	 	scanf("%d",&num);
	 	if(num<=0)
	 	break;
	 	printf("you entered %d \n",num);
	 }	
}
