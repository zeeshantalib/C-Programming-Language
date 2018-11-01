#include <iostream>
using namespace std;
int main()
{
    int x=1;
    do // will run at least one time
	{     
        cout <<x<<endl;
        x++;
    }while(x<=10); // test is false
}
