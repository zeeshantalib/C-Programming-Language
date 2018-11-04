#include<stdio.h>
int g;
/* this is a Global Variable declared outside the function. this can be used 
in all functions in the program .G.V is destroyed on exiting the
program.		*/
void fun();
int main()
{
	printf("enter number");
	scanf("%d",&g); 
	fun();
	//  here  the function is called by name fun.
	printf("value of g on calling:%d\n",g);
}
void fun()
{
	int g;
	/*  this is local variable declared inside a function. this can only be used 
	in function in which it is declared. it is destroyed from memory as control moves out of 
	the function.  */
	g=g*2;
}

