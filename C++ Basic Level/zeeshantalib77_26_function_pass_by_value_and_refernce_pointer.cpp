#include <iostream>
using namespace std;
void pass_by_value(int x);
void pass_by_reference(int *x);
int main()
{
    int zeeshan=13;
    int ali=13;
    cout<<"Before function calling zeeshan = "<<zeeshan<<endl;
    pass_by_value(zeeshan);
    cout<<"After function calling zeeshan = "<<zeeshan<<endl;
    cout<<endl;
    cout<<"Before function calling Ali = "<<ali<<endl;
    pass_by_reference(&ali);
    cout<<"After function calling Ali = "<<ali<<endl;
}
void pass_by_value(int x)
{
    x = 99;
}
void pass_by_reference(int *x)
{
    *x=66;
}
