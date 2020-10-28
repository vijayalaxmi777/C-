/*22.2 operator overloading:
							a)by member function
							b)by friend function
*/
//by friend function
#include<iostream>
#include<conio.h>
using namespace std;
class Operator
{
	int a,b;
	public :
		Operator(int x,int y)		//parameterised constructor
		{
			a=x;
			b=y;				
		}
		void display()
		{
			cout<<"----------------------------------\n";
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		void operator --()
		{
			--a;
			--b;
		}
		friend void operator ++(Operator &obj);
};
void operator ++(Operator &obj)
{
	++obj.a;
	++obj.b;
}
int main()
{
	Operator ob(10,20);
	ob.display();
	--ob;				//obj.operator --()
	ob.display();
	++ob;				//operator ++(ob)
	ob.display();
	getch();
	return 0;	
}

