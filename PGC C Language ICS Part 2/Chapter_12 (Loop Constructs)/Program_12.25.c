#include<stdio.h>
void main()
{
   long int product;
   int c;
   product=1;
   for(c=1;c<=10;c=c+2)
   product*=c;
   printf("result is %d",product);	
}
