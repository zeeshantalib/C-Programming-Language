#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("Enter your marks");
	scanf("%d,&marks");
	// if is a selection structure.It executes or skips a statement.
	if(marks>=40)
	// followig is displayed if given condition is TRUE , otherwise skipped.
			printf("you have passed");
	getch();
}
