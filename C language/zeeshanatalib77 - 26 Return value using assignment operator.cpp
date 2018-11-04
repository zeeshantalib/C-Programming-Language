#include<stdio.h>
#include<conio.h>
int cube(int);
int main()
{
	int n,c;
	printf("enter number");
	scanf("%d",&n);
	c=cube(n);
	/* the value of Actual parameter "n" entered by the user is stored in "n" and passed to
	the former parameter (int num). in this function calling. statement of function is executed  .*/
	printf("Cube is %d",c);
}
int cube(int num)
// vaue of n is returned to former parameter.
{
	return num*num*num;
}
// above function shows the cube of entered number.


/* NOTE: the int return_type returns integer value, but if no value is returned
keyword void is used as return type to return no value.   		*/

