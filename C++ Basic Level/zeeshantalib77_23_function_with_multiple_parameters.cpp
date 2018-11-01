#include<iostream>
using namespace std;
int addnumbers(int x, int y) // This function takes two parameters.
{
    int answer=x+y;
    return answer;
}

int main()
{
    cout <<addnumbers(43, 86); // Call the function.
    return 0;
}

