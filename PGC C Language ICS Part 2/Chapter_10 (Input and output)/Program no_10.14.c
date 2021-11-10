#include<stdio.h>
void main()
{
   float base,height;
   double area;
   printf("enter base");
   scanf("%f",&base);
   printf("enter height");
   scanf("%f",&height);
   area=0.5*base*height;
   printf("area is %5.2f",area);
}
