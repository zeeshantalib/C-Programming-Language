#include<stdio.h>
void main()
{
	char c;
	printf("Enter an alphabet:");
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
			printf("You entered vowel.");
			break;
		case 'e':
		case 'E':
			printf("You entered vowel.");
			break;
		case 'i':
		case 'I':
			printf("You entered vowel.");
			break;
		case 'o':
		case 'O':
			printf("You entered vowel.");
			break;
		case 'u':
		case 'U':
			printf("You entered vowel.");
			break;
		default:
			printf("You entered a consonant.");
	}
}
