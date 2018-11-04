#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	// multiple if else checks multiple blocks and executes only one.
	if(n>0)
		printf("number is positive");
	// it is executed if condition is TRUE.
	else if(n<0)
		printf("number is negative");
		// it is executed if this condition is TRUE.
	else
	// the statement in the last else is executed if all statemets before last else is FALSE.
		printf("number is zero");
	getch();
}
