#include<stdio.h>
void main()
{
     int f;
	 float c;
	 printf("fahrenheit \t celsius \n");
	 for(f=50;f<=100;f=f+5)
	 {
	 	c=5.0/9.0*(f-32);
	 	printf("%3d \t %6.2f \n",f,c);
	 }	
}
