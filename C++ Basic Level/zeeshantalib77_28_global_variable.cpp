#include <iostream>
using namespace std;
void bucky();
int number=69; // global variable/global scope

int main()
{
    int number=20; // local variable / local scope
    cout<<number<<endl; // local number
    cout<<::number<<endl; // accessing global number using the unary scope resolution operator (::)

    bucky();
}

void bucky() // bucky() can't access the number that is inside the main function
{ 
    cout<<number<<endl; // global number
}
