#include<stdio.h>
void main()
{
	short testVar= 32767;
	printf("%d\n",testVar);
	testVar=testVar+1;
	printf("%d\n",testVar);
	testVar=testVar-1;
	printf("%d\n",testVar);
}
