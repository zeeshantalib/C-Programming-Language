#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	ofstream zeefile("players.txt");
	 
	cout<<"Enter palyers ID, Name, and Money"<<endl;
	cout<<"press Ctrl+Z to quit\n"<<endl;
	 
	int id_number;
	string name;
	double money;
	 
	while(cin>>id_number>>name>>money)
	{
	zeefile<<id_number<<' '<<name<<' '<<money<<endl; 
	}
	 
}
	 
