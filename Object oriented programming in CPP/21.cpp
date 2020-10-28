//21.friend function
/*
 A friend function of a class is defined outside that class' scope
but it has the right to access all private and protected members of the class.
Even though the prototypes for friend functions appear in the class definition, 
friends are not member functions.
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person
{
	int id;
	char name[30];
	public:
		void setData(int pId,char pnm[])
		{
			id=pId;
			strcpy(name,pnm);
		}
		void display()
		{
			cout<<"Person Id   		 = "<<id<<endl;
			cout<<"Person name 		 = "<<name<<endl;
		}
		friend void alter(Person &obj);

};
void alter(Person &obj)
{
	obj.id=111;
}
int main()
{
	Person obj;
	Person obj2;
	obj.setData(101,"vj");
	obj2.setData(102,"raveena");
	obj.display();
	obj2.display();
	/* A member is access through objects*/
	alter(obj);	//calling function
	alter(obj2);
	/*whereas a friend function requires object
	to be passed by value or by reference as 
	a parameter
	*/
	obj.display();
	obj2.display();
	getch();
	return 0;	
}
/*
Disadvantages:
violates:
		a) encapsulation
		b) data hiding
*/
