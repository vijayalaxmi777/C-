//A program to perform reading operation 
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	ifstream fin;
	char ch;
	fin.open("myFile.txt");
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
	fin.close();
	getch();
	return 0;
}

