//program to demonstrate function of swapping:call by value
#include<iostream>
#include<conio.h>
void swap(int,int);
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter 2 no's\n";
	cin>>a>>b;
	cout<<"--------------Before Swapping----------------\n";
	cout<<" A= "<<a<<endl;
	cout<<" B= "<<b<<endl;
	swap(a,b);
	getch();
	return 0;	
}
void swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"--------------After Swapping----------------\n";
	cout<<" A= "<<x<<endl;
	cout<<" B= "<<y<<endl;
}
