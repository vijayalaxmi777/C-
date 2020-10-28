//9.default arguments
#include<iostream>
#include<conio.h>

//default arguments always start from right to left
void avg(int,int,int z=50);
using namespace std;
int main()
{	int a,b;
	cout<<"Enter 2 no's ";
	cin>>a>>b;
	avg(a,b);
	getch();
	return 0;	
}
void avg(int x,int y,int z)
{
	float avg;
	avg= (float)(x+y+z)/3;
	cout<<"Average = "<<avg;
}
