#include <iostream>
using namespace std;
void print_number(int x) // function overloading - functions - name same- different parameter and type
{
    cout<<"i am printing an integer "<<x<<endl;
}
void print_number(float x)
{
    cout<<"now i am printg an float"<<x<<endl;
}
int main()
{
    int a=54;
    float b=32.4896;

    print_number(a);
    print_number(b);
}
