//39. a program of writing to the file
// writing purpose only
#include<iostream>
#include<conio.h>
#include<String.h>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout;
	char name[]="vijaya \n";
	fout.open("Ganesh.txt"); // only for writing purpose
	int i;
	for(i=0;i<strlen(name);i++)
	{
		fout.put(name[i]);
	}
	cout<<"File is written...";
	fout.close();
	getch();
	return 0;
}
