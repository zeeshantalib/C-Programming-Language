#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter your marks");
	scanf("%d",&marks);
	if(marks>=40)
	printf("you have passed");
	//  this statement is executed if condition is TRUE.
	else
	/* if-else stament never skip a statement.Following statement is executed if condition is
	FALSE.*/
    printf("you are FAIL");
	getch();
}
