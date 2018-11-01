#include <iostream>
using namespace std;
void print_array(int array[], int size_of_array); // prototype
int main()
{
    int array1[3]={20,54,675};
    int array2[6]={54,24,7,8,9,99};
    print_array(array1,3);
    print_array(array2,6);
}

void print_array(int array[], int size_of_array)
{
    for(int x=0;x<size_of_array;x++)
	{
        cout<<array[x]<<endl;
    }
}
