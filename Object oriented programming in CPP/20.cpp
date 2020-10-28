//20. operator overloading: increment ++/--
#include<iostream>
#include<conio.h>
using namespace std;
class member
{
		private:
		int a,b;
	public:
		void get()
		{
			cout<<"Enter the values for a and b\n";
			cin>>a>>b;	
		}	
		void display()
		{
			cout<<"Value of a = "<<a<<endl;
			cout<<"Value of b = "<<b<<endl;
		}
		void operator ++()
		{
			a=++a;
			b=++b;
		}
};
int main()
{
	member obj;
	obj.get();
	cout<<"------------ Before Increment -----------------\n";
	obj.display();
	cout<<"------------ After  Increment -----------------\n";	
	++obj; // obj.operator ++()
	obj.display();
	return 0;
	getch();
}


