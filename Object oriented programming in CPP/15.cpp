//15.WAP to demonstrate passing object : finding largest object
#include<iostream>
#include<conio.h>
using namespace std;
class large
{
	int a,b;
	public:
		void getData()
		{
			cout<<"Enter values for a and b";
			cin>>a>>b;
		}
		void dispData()
		{
			cout<<"A= "<<a<<endl;
			cout<<"B= "<<b<<endl;
		}
		void larger(large l)
		{
			int res1=a+b;
			int res2=l.a+l.b;
			if(res1>res2)
			{
				cout<<"Object 1 is larger"<<endl;
			}
			else
			{
				cout<<"Object 2 is larger"<<endl;	
			}
		}
};
int main()
{
	large l1,l2;
	l1.getData();
	l2.getData();
	cout<<"-------------- Object 1--------------------------\n";
	l1.dispData();
	cout<<"-------------- Object 2--------------------------\n";
	l2.dispData();
	cout<<"--------------- Larger --------------------------\n";
	l1.larger(l2);
	getch();
	return 0;	
}

