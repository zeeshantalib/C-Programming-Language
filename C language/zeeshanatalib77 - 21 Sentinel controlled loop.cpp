#include<stdio.h>
#include<conio.h>
int main()
// this is a sentinel(special value) controlled loop and depends on a specific value.
{
	int n;
	n=1;
	while(n !=-1)
	/* the statements in loop body is executed while the condition is True.
	if we enter num.. except of -1 condition remains true .*/
	{
		printf("enter a number");
		scanf("%d",&n);
		printf("you entered %d \n",n);
		//  this code will display the entered number until cond.. is true.
	}
	//  loop terminates only on entering sentinel value "-1".and control comes out of loop body.
	printf("End of program");
	getch();
}
