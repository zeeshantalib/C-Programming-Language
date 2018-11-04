#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
    printf("enter a alphabet");
	scanf("%c",&c);
	switch(c)
	/*  Switch statement is another conditional structure.it is alternative of nested-if -else.
	   as there are many choices available and only one should be executed*/
	{
	case 'a':
	case 'A':
	printf("you entered a vowel");
	break;
	/*   The expression in switch(expression) is compared with multiples cases . if it match the
				case value , then  statement in the case is executed.				*/
	case 'e':
	case 'E':
	printf("you entered a vovel");
	break;
	case 'i':
	case 'I':
	printf("you entered a vowel");
	break;
	case 'o':
	case 'O':
	printf("you entered a vovel");
	break;
	case 'u':
	case 'U':
	printf("you enteread a vowel");
	break;
	default:
		/*  defalt is executed if expression does not match 
				with any case labels. its use is optional.		*/
	printf("you entered a constant");
	}
    getch();
	}
