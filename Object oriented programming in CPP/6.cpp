//6.a program to find out largest no. using function
#include<iostream>
#include<conio.h>
using namespace std;
int largest(int,int);
int main()
{
	int a,b,l;
	cout<<"Enter 1st no\n";
	cin>>a;
	cout<<"Enter 2nd no\n";
	cin>>b;
	l=largest(a,b);
	cout<<"Largest no is "<<l;
	getch();
	return 0;	
}
int largest(int x,int y)
{
	if(x>y)
	return x;
	else
	return y;
}
