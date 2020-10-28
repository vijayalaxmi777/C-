//42. a program to copy one file to another file
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
char ch;
char source[30], target[30];
cout<<"Enter source file name\n";
cin>>source;
cout<<"Enter target file name\n";
cin>>target;
ifstream fin(source,ios::in);		// taking i/p from file			/*By using 
ofstream fout(target,ios::out);		// writing to the file			constructor */
while(!fin.eof())
{
	ch=fin.get();
	fout.put(ch);
}
cout<<"file is copied...";
fin.close();
fout.close();
	getch();
	return 0;
}

