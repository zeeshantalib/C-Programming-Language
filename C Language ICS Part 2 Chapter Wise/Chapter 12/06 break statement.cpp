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
		break;
		/* here break statement is used to come out of the loop body. the "pakistan is displayed 
		only one times ,because break transfers the control out of loop body{}.it exits the
		loop.	*/ 
	}
	getch();
}
// if break not used the pakistan will be displayed five times in a repetetion.(loop)
