#include <iostream>
using namespace std;
int main()
{
    int value=5;
    cout<<&value<<endl; // address operator (&) use to show address of any variable

    int *value_pointer; // a pointer is variable which store address of another variable
    value_pointer=&value;
    cout<<value_pointer<<endl;
}
