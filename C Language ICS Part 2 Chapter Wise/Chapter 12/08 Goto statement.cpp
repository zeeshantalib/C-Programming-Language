#include<stdio.h>
#include<conio.h>
int main()
{
	int n=1;
	display:
		// here display is named label.
		printf("%d\n",n);
		n=n+1;
		if(n<=5)
			goto display;
		/* goto statement is used to perform unconditional transfer of control 
		to a named label . here control is transferred to label display: thefore
		control again moves to start of loop..  */
		getch();
}
