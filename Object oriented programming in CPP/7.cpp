//7.function overloading
#include<iostream>
#include<conio.h>
void area(int);
void area(double);
void area(int,int);
using namespace std;
int main()
{
	int r,l,b;
	double s;
	cout<<"Enter the radius\n";
	cin>>r;
	cout<<"Enter the length and breadth \n";
	cin>>l>>b;
	cout<<"Enter the side\n";
	cin>>s;
	cout<<"-------------------------------------------------------\n";
	area(r);
	cout<<"-------------------------------------------------------\n";
	area(l,b);
	cout<<"-------------------------------------------------------\n";
	area(s);
	getch();
	return 0;	
}
void area(int x)
{	float a;
	a=3.14*x*x;
	cout<<"Area of circle = "<<a<<endl;
}
void area(double x)
{
	double a;
	a=x*x;
	cout<<"Area of square = "<<a<<endl;
}
void area(int x,int y)
{
	int a;
	a=x*y;
	cout<<"Area of rectangle = "<<a<<endl;
}
