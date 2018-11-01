#include <iostream>
using namespace std;
int main()
{

    int age=23;
    int money=650;
    if(age>21 && money>500) // AND operator
	{ 
        cout<<"you are ready"<<endl; // both tests must be true for this code to run | if any one case is false than this code will not run
    }

    if(age>21 || money>500) // OR operator
	{ 
        cout<<"you are also ready"<< endl; // one test must be true for this code to run
    }
}
