#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	// User enters three variables.
	if(a==b)
	/* There are two situations here.1st_if  the condition is FALSE the control
			shifts to last else of the first if.*/
	// if the condition is true control enters the NESTED if .
				if(a==c)			
				printf("All numbers are equal");
				else
				printf("all numbers are different");
	/* If the nested-if condition is true.if_statement is executed
	otherwise nested_else statement is executed and last else is skipped.*/
	else
		printf("all numbers are different");
		getch();				
}
