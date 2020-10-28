							// CONSTRUCTOR
/*
- It is special member function because constructor has same name as that of the class.
- Constructor has no return type
					Types  of  Constructor
						a) Default Constructor
						b) Parameterised Constructor
						c) Copy Constructor			


*/

#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
class product
{
	int pId;
	char pName[30];
	float price;
	public :
		product()		//default constructor
		{
			pId=101;
			strcpy(pName,"Let Us C");
			price=1000;
		}
		product(int id,char nm[], float p)	//parameterised constructor
		{
			pId=id;
			strcpy(pName,nm);
			price=p;
		}
		void display()
		{
			cout<<"Product Id= "<<pId<<endl;
			cout<<"Product Name= "<<pName<<endl;
			cout<<"Product Price= "<<price<<endl;
		}
};

int main()
{
	product obj1;
	product obj2(102,"DS",2000);
	cout<<"--------------------------- Obj1 --------------------------\n";
	obj1.display();
	cout<<"--------------------------- Obj2 --------------------------\n";
	obj2.display();
	getch();
	return 0;	

}
