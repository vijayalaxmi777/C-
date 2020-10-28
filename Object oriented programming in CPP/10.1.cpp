//10.1. WAP to demonstrate data memebers in public section
#include<iostream>
#include<conio.h>
using namespace std;
class stud
{
	private:
	public:
	int rno;
	char name[30];
	float per;	
};
int main()
{
	stud s1; 		// creation of object
	cout<<"Size of object :"<<sizeof(s1)<<endl;
	cout<<"Enter rollno,name,percentage";
	cin>>s1.rno;
	cin>>s1.name;
	cin>>s1.per;
	cout<<"--------------------------------------------------------\n";
	cout<<"rno : "<<s1.rno<<endl;
	cout<<"name: "<<s1.name<<endl;
	cout<<"per : "<<s1.per<<endl;	
	getch();
	return 0;	
}
