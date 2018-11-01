#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	 ifstream zeefile("players.txt"); 
	 int id_number;
	 string name;
	 double money;
	 
	 while(zeefile>>id_number>>name>>money)
	 {
		cout<<id_number<<","<< name<<","<<money<<endl;
	 }
}
	 
