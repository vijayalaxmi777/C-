//18. A program to demonstrate copy constructor

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
			product(int id,char nm[], float p)	//parameterised constructor
		{
			pId=id;
			strcpy(pName,nm);
			price=p;
		}
			product(product &obj)
			{
				pId=obj.pId;
				strcpy(pName,obj.pName);
				price=obj.price;
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
	product obj2(103,"PL",2300);	//invokation of parameterised constructor
	product obj3(obj2);				//invokation of copy constructor
	cout<<"---------------- Object 2 -----------------------\n";
	obj2.display();	
	cout<<"---------------- Object 3 -----------------------\n";
	obj3.display();
	getch();
	return 0;	
}
