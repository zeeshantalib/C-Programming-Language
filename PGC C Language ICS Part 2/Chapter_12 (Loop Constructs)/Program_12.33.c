#include<stdio.h>
void main()
{
     int fail,full,marks,total,c;
	 float avg=0.0;
	 fail = full = total =0;
	 for(c=1;c<=35;c++);
	 {
	 	printf("enter marks");
	 	scanf("%d",&marks);
	 	total = total+marks;
	 	if(marks==100)
	 	fail++;
	 	if(marks==100)
	 	full++;
	 }
	 avg=total/35.0;
	 printf("average marks %.2f \n",avg);
	 printf("failed students %d \n",fail);
	 printf("students who scored 100 %d \n",full);	
}
