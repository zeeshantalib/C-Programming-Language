#include<stdio.h>
void main()
{
	char s;
	do
	{
		printf("enter the current state of phone(\'w\'for working \'d\'for dead)");
		scanf("%c",&s);
	}
	while(s!='w'&& s!='d');
}
