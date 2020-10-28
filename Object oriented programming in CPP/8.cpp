//8.default arguments
#include<iostream>
#include<conio.h>

//default arguments always start from right to left
void show(int a=10,float b=30.11,char z='#');
using namespace std;
int main()
{
	show(5.5);
	getch();
	return 0;	
}
void show(int a,float b, char z)
{
	cout<<"Integer= "<<a<<endl;
	cout<<"Float= "<<b<<endl;
	cout<<"Character= "<<z<<endl;
}
