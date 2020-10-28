//5.program to demonstrate function of swapping:call by reference
#include<iostream>
#include<conio.h>
void swap1(int &,int &);
void swap2(int *,int *);
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 no's\n";
	cin>>a>>b;
	cout<<"--------------Before Swapping-------------------\n";
	cout<<" A= "<<a<<endl;
	cout<<" B= "<<b<<endl;
	swap1(a,b);
	cout<<"--------------After 1st Swapping----------------\n";
	cout<<" A= "<<a<<endl;
	cout<<" B= "<<b<<endl;
	swap2(&a,&b);
		cout<<"--------------After 2nd Swapping----------------\n";
	cout<<" A= "<<a<<endl;
	cout<<" B= "<<b<<endl;
	return 0;
	getch();	
}
void swap1(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
void swap2(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
