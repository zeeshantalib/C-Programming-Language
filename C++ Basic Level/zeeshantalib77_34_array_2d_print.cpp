#include <iostream>
using namespace std;
int main()
{
    int array[2][3]={{1,2,3},{7,8,9}};
    for(int row=0;row<2;row++)
	{
        for(int column=0;column<3;column++)
		{
            cout<<array[row][column]<< " ";
        }
        cout<<endl;
    }
}
