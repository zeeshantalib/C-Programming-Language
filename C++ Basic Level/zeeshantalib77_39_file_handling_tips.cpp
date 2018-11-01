#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream zeeshanfile("zee.txt");
	if(zeeshanfile.is_open())
	{
		cout<<"file is open zeeshan"<<endl;
	}
	else
	{
		cout<<"zeeshan you messed up"<<endl;
    }

	 zeeshanfile<<"i love my country\n";
	 zeeshanfile.close();
}
