#include<stdio.h>
#include<conio.h>
int main()
{
	char ch1,ch2,sum;
	               // Here character type data is declared with keyword char.
	ch1='2';
	ch2='6';
	sum=ch1+ch2;
	printf("sum=%d",sum);
	               /* the sum of character 2 & 6 should be 104 ,because the ASCII value of 
	                  2 is 50 and of 6 is 54.*/
	getch();
}
