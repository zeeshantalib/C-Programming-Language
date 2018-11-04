#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	n=1;
	while(n<=5)
	//   while-loop executes the statement while the given condition is true
	//   In while loop condition comes before the body {} of the loop.
	{
		printf("Pakistan\n");
		n++;
	}
	/* pakistan is displayed five times while the condition n<=5 remains TRUE.
	If n become equal to_or greater than five the loop terminates.*/
	getch();
}
