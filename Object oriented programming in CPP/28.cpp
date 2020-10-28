/*WAP to demonstrate binary operator overloading 
												a)using member function
												b) using friend function
*/
//using member function
#include<iostream>
#include<conio.h>
using namespace std;
class Large
{
	int a;
	int b;
	public :
		Large(int x,int y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		Large operator >(Large &ob)
		{
			int t1,t2;
			t1=a+b;
			t2=ob.a+ob.b;
			if(t1>t2)
				return(*this);
			else
				return ob;
		}
};
int main()
{
	Large obj1(10,30), obj2(2,5);
	cout<<"------------------ Obj1 ----------------------\n";
	obj1.display();
	cout<<"------------------ Obj2 ----------------------\n";
	obj2.display();
	cout<<"------------------Larger----------------------\n";
	Large obj3= obj1>obj2; 	//obj1.operator>(obj2)
	obj3.display();
	getch();
	return 0;	
}
