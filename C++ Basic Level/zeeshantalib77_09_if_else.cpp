#include <iostream>
using namespace std;
int main()
{
    int age=178;
    if(age>60)  // a nested if statement (if within another if)
	{
        cout<<"wow you are old"<<endl; // runs when the if statement is true
        if(age>100)  
		{ 
            cout<<"Awesome !"<<endl; // this statement and the above statement runs when age > 100 is true.
        }
    }
	else
	{
        cout<<"you are young, get a job"<<endl; // runs when the if statement is false
    }
    return 0;
}
