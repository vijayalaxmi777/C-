//single level inheritence using public derivation
#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	int a,b;
	public :
		void get()
		{
			cout<<"Enter the values of a and b";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"A= "<<a<<"\n";
			cout<<"B= "<<b<<"\n";
		}
		int return_a()
		{
			return a;
		}
		int return_b()
		{
			return b;
		}
};
class Total : public Base
{
	private :
		int t;
		public :
			void add()
			{
				t= return_a()+return_b();
			}
			void dispTotal()
			{
				cout<<"Total = "<<t;
			}
};
int main()
{
	Total obj;
	obj.get();
	obj.display();
	obj.add();
	obj.dispTotal();	
	getch();
	return 0;	
}
/*The properties of base class
 can be accessed by creating the object of chlid class*/
