#include<stdio.h>
#include<conio.h>
int main()
{
	char book[50];
	// book is declared in the program.
	printf("enter your interestsing book");
	gets(book);
	// gets is used to string input from the user.
	// user entered book is passed to puts function.
	printf("your favourite book is :");
	puts(book);
	// puts is used to display string variable on the screen.
	// puts displays the name of the string "book."
	getch();
}
