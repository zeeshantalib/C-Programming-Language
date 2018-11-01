#include<iostream>
using namespace std;
int main()
{
    int age=21;
    switch(age)
    {
        case 16:
            cout<<"i am 16"<<endl;
            break; // end the case otherwise it will continue to run case 18, case 21 and default
        case 18:
            cout<<"i am 18"<<endl;
            break; // end the case otherwise it will continue to run case 21 and default
        case 21:
            cout<<"i am 21"<<endl;
            break; // end the case otherwise it will continue and run default
        default:
            cout<<"sorry you get nothing"<<endl;
            // no break because it reached the end anyway.
    }
}
