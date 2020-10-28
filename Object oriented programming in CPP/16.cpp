//16. WAP to demonstrate returning objects
#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	int a;
	float b;
	public:
		void setData(int x,float y)
		{
			a=x;
			b=y;
		}
		void dispData()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		sum add(sum obj)
		{
			sum temp;
			temp.a=obj.a+a;
			temp.b=obj.b+b;
			return temp;
		}
};
int main()
{
	sum obj1,obj2;
	obj1.setData(10,10.5);
	obj2.setData(20,20.5);
	cout<<"----------------- Object 1 --------------------------\n";
	obj1.dispData();
	cout<<"----------------- Object 2 --------------------------\n";
	obj2.dispData();
	cout<<"------------------ Addition -------------------------\n";
	sum obj3= obj1.add(obj2);
	obj3.dispData();
	getch();
	return 0;	
}
