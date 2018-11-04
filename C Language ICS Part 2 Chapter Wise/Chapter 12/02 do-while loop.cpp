#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	n=1;
	do
	/*      In do-while loop condition comes after the body of loop.
			loop is executed at least once even if the condition is FALSE. */
	{
		printf("Pakistan\n");
		n++;
	}
	while(n<=5);
	// in do-while semicolon is used after the conditon.
	// the semicolon is not used in after the  while loop condition.
	getch();
}
