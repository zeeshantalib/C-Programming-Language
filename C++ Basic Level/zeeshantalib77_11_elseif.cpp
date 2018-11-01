#include <iostream>
using namespace std;
int main()
{
    int grade=61;
    if(grade>90)  
	{
        cout<<"you got A grade"<<endl;
    }
	else if(grade>80) // else if use for to put multiple condition
	{
        cout<<"you got B grade"<<endl;
    }
    else if(grade>60)  // this is true condition in elseif
    {
    	cout<<"you got C grade"<<endl;
	}
    else
    {
    	cout<<"you got D grade"<<endl;
	}
    return 0;
}
