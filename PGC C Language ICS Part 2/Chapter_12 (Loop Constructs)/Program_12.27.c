#include<stdio.h>
void main()
{
     int tab,len,c;
	 printf("enter number for table");
	 scanf("%d",&tab);
	 printf("enter length of table");
	 scanf("%d",&len);
	 for(c=1;c<=len;c++)
	 printf("%d * %d=%d \n",tab,c,tab*c);	
}
