//binary operator overloading using friend function 
#include<iostream>
#include<conio.h>
using namespace std;
class Binary
{
	int a;
	int b;
	public :
		void getData()
		{
			cout<<"Enter values for a and b\n";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		friend Binary operator -(Binary &obj1, Binary &obj2);
};
Binary operator -(Binary &obj1, Binary &obj2)
{
	Binary temp;
	temp.a=obj1.a - obj2.a;
	temp.b=obj1.b - obj2.b;
	return temp;
}
int main()
{
	Binary b1,b2,b3;
	cout<<"---------------- Obj 1 --------------------\n";
	b1.getData();
	cout<<"---------------- Obj 2 --------------------\n";
	b2.getData();
	cout<<"---------------- Obj 1 --------------------\n";
	b1.display();
	cout<<"---------------- Obj 2 --------------------\n";
	b2.display();
	cout<<"---------------- Sub  --------------------\n";
	b3= b1- b2;	//operator(b1,b2); 
	b3.display();
	getch();
	return 0;	
}
