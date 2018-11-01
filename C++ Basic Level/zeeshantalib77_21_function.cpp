#include<iostream>
using namespace std;
void printsomething(); // Prototype the function - function declaration -> retutn type+function name
int main()
{
    printsomething(); // function calling in main by function name
    return 0;
}
void printsomething() // function definition -> return type + funtion name
{
    cout<<"I am a function"<<endl;  // function body
}
