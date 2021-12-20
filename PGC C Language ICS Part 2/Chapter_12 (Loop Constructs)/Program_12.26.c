#include<stdio.h>
void main()
{
    int tab,c;
	printf("enter number for table");
	scanf("%d",&tab);
	for(c=1;c<=10;c++)
	printf("%d * %d=%d \n",tab,c,tab*c);	
}
