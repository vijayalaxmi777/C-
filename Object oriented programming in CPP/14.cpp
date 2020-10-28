//14.passing object(NOT VALUE) to the member function
#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
	int a;
	float b;
	public :
		void setData(int x,float y)
		{
			a=x;
			b=y;
		}
		void dispData()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
		void add(sum obj)
		{
			cout<<"Integer Addition = "<<a+obj.a<<endl;	
			cout<<"Float Addition = "<<b+obj.b<<endl;
		}
};
int main()
{
	sum obj1,obj2;
	obj1.setData(2,2.5);
	obj2.setData(4,4.5);
	cout<<"------------------Object 1----------------------\n";
	obj1.dispData();
	cout<<"------------------Object 2----------------------\n";
	obj2.dispData();
	cout<<"-------------------Addition----------------------\n";
	obj1.add(obj2);
	getch();
	return 0;	
}
