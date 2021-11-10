#include<stdio.h>
void main()
{
    int n,a,b;
    printf("Enter 3-digit number");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n/10;
    n=n%10;
    printf("number in reverse order is %d%d%d",n,b,a);
}
