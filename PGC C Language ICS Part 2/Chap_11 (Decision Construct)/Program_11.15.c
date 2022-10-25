#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	if((ch>='A') && (ch<='Z'))
	printf("The character %c is a capital letter.\n",ch);
	else if((ch>='a') && (ch<='z'))
	printf("The character %c is a small case letter.\n",ch);
	else if((ch>='0') && (ch<='9'))
	printf("The character %c is a digit.\n",ch);
	else
	printf("The character %c is a symbol.\n",ch);
}
