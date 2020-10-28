//19. Operator Overloading
/*syntax :
return type operator  operator to be overloaded(parameters)
{

}
*/
/*
a) Unary Operator Overloading
i) by member function
ii) by friend function
*/

// operator overloading using member function
#include<iostream>
#include<conio.h>
using namespace std;
class member
{
	int a,b;
	public :
		void get()
		{
			cout<<"Enter the values for a and b\n";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"value of A = "<<a<<endl;
			cout<<"value of B = "<<b<<endl;
		}
		void operator -()
		{
			a=-a;
			b=-b;
		}
		
	
};
int main()
{
	member obj;
	obj.get();
	obj.display();
	-obj;
	cout<<"======= After Changing Sign ===========\n";
	obj.display();
		getch();
		return 0;
}
