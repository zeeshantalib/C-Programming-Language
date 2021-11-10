#include<stdio.h>
void main()
{
     int height;
     float height_in_cm;
     printf("enter height inches");
     scanf("%d",&height);
     height_in_cm=height*2.54;
     printf("your height in cm is %f",height_in_cm);
}
