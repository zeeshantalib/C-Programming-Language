#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers:");
	scanf("%d %d %d",&a, &b, &c);
	if(a<b)
	    if(a<c)
	    printf("%d is smallest number",a);
	    else
	    printf("%d is smallest number",c);
	else
	if(b<c)
	printf("%d is smallest number",b);
	else
	printf("%d is smallest number",c);    
}
