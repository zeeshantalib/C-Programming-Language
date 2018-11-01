#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	 ofstream zeeshanfile;
	 zeeshanfile.open("zee.txt");
	 
	 zeeshanfile<<"I love tuna and tuna loves me!\n";
	 zeeshanfile.close();
}
