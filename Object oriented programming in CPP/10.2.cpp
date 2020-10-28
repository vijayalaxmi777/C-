//10.2.WAP to demonstrate member function in private section
#include<iostream>
#include<conio.h>
using namespace std;
class stud
{
	private:
		int rno;
		char name[30];
		float per;	
	public:
		void getInfo()
		{
			cout<<"Enter roll no";
			cin>>rno;
			cout<<"Enter name";
			cin>>name;
			cout<<"Enter percentage";
			cin>>per;
		}
		void show()
		{
			cout<<"Roll no= "<<rno<<endl;
			cout<<"Name= "<<name<<endl;
			cout<<"Percentage= "<<per<<endl;
		}
		
	
};
int main()
{
	stud s1;
	s1.getInfo();
	cout<<"-----------------------------------------------------\n";
	s1.show();
	getch();
	return 0;	
}
