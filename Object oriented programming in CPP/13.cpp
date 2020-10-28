//13.Array of object
#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
class Customer
{
	int id;
	char name[30];
	public :
		void getInfo()
		{
			cout<<"Enter Id "<<endl;
			cin>>id;
			cout<<"Enter name"<<endl;
			cin>>name;
		}
		void dispInfo()
		{
			cout<<"Id = "<<id<<endl;
			cout<<"Name = "<<name<<endl;
		}
};
int main()
{
	Customer c[3];
	int i;
	for( i=0;i<3;i++)
	{
		c[i].getInfo();					//i/p block
	}
	cout<<"----------------------------------------------------------\n";
	for( i=0;i<3;i++)
	{
		c[i].dispInfo(); 				//o/p block
		cout<<"----------------------------------------------------------\n";
	}
	getch();
	return 0;	
}
