#include<stdio.h>
void main()
{
	 float r,area,volume;
	 printf("Enter radius");
	 scanf("%f",&r);
	 area=4*3.14*r*r;
	 volume=(4.0/3.0)*3.14*r*r*r;
	 printf("\nArea is %5.2f\n",area);
	 printf("volume is %5.2f",volume);
}
