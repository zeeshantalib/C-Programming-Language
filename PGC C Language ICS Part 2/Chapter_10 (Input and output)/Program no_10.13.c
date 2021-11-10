#include<stdio.h>
void main()
{
    char name[10],address[15];
    int age;
    printf("Enter your age");
    scanf("%d",&age);
    printf("Enter your name");
    scanf("%s",&name);
    printf("Enter your address");
    scanf("%s",&address);
    printf("your name is %s\n",name);
    printf("your address is %s\n",address);
    printf("your age is %d",age);
}
