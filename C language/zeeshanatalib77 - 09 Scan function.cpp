#include<stdio.h>
#include<conio.h>
int main()
{
	float height,base;
	// here float variable is initialized as height and base.
	double area;
	// double float is used for larger value and range.
	printf("enter height");
	scanf("%f,&height");
	// scanf function is used to get input from the user.
	// symbol & indicates the memory adress of the variable storing input.
	printf("enter base");
	scanf("%f,&base");
	area=0.5*base*height;
    printf("area=%5.2f",area);
	getch();
}
