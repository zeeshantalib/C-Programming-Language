#include <iostream>
using namespace std;
int factorial(int x) // recursive function - a function which call itself automatically
{ 
    if(x==1) // base case - end the function when x = 1
	{  
        return 1;
    }
	else
	{
        return x*factorial(x-1);
    }
}

int main()
{
    cout<<factorial(5)<<endl;
}
