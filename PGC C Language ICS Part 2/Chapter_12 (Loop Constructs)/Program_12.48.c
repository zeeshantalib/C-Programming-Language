#include<stdio.h>
void main()
{
   float number;
   positive:
   printf("please enter a positive number");
   scanf("%f",&number);
   if(number<0)
   {
   	goto positive;
   }
   else
   {
   	printf("square root of %0.2f is %0.2f",number,sqrt(number));
   }
}
