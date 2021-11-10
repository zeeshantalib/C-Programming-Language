#include<stdio.h>
void main()
{
	float r,area,cir;
	printf("enter radius");
	scanf("%f",&r);
	area=3.141*r*r;
	cir=2.0*3.141*r;
	printf("Area is %5.2f\n",area);
	printf("circumference is %5.2f\n",cir);	
}
