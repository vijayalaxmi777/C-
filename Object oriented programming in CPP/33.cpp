//virtual function
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public :
		virtual void display()
		{
			cout<<"Display in base class \n";
		}
		virtual void show()
		{
			cout<<"Show in base class \n";
		}
		
};
class Derived :public Base		//private 
{
	public :
		void display()
		{
			cout<<"Display in derived class\n";
		}
		void show()
		{
			cout<<"Show in base class \n";
		}
};
int main()
{
	Base *bptr;
	Base b1;
	bptr=&b1;
	bptr->display();
	bptr->show();
	cout<<"-------------------------------------------------\n";
	Derived d1;
	bptr=&d1;
	bptr->display();
	bptr->show();
	getch();
	return 0;	
}
