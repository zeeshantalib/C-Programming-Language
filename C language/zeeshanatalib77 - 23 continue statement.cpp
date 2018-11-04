#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	n=1;
	while(n<=5)
	{
		printf("Pakistan\n");
		n++;
		continue;
		/* here continue statement is used which is used to move the control to
		the start of the loop.  */
		printf("hello world");
		// this statement hello world will never be executed.
	}

	getch();
}
