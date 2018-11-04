#include<stdio.h>
#include<conio.h>			
int main()	
/*  this program give output as;
4	4	4	4
3	3	3
2	2
1								*/
{							
	int m,n;
	m=4;
	// this is the outer loop{}.
	do
	{
		n=m;
		// this is the  inner loop{}.
		do
		{
		printf("%d\t",m);
		n--;
		}
	while(n>=1);
	printf("\n");
	m--;
	}
	while(m>=1);
	getch();
}
