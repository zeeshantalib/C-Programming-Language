#include<stdio.h>
void main()
{
   int i,s;
   float avg;
   s=0;
   for(i=1;i<=10;i++)
   {
   	printf("%d \n",i);
   	s=s+i;
   }
   avg=s/10.0;
   printf("average is %.2f",avg);	
}
