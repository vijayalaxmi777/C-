//37.A program to demonstrate  VIRTUAL BASE CLASS
#include<iostream>
#include<conio.h>
using namespace std;
class A
{
	public :
		void display_A()
		{
			cout<<"In class A "<<endl;
		}
};

class B : public virtual A
{
	public :
			void display_B()
		{
			cout<<"In class B "<<endl;
		}	
};
class C : virtual public  A
{
	public :
			void display_C()
		{
			cout<<"In class C "<<endl;
		}	
};
class D : public C, public B
{
	public :
			void display_D()
		{
			display_A();
			cout<<"In class D "<<endl;
		}	
};
int main()
{
	D obj;
	obj.display_D();
	getch();
	return 0;	
}
