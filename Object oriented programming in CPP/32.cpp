//32.multilevel inheritence
#include<iostream>
#include<conio.h>
using namespace std;
class Stud
{
	int rno;
	char name[30];
	public :
		void getInfo()
		{
			cout<<"Enter the roll no ";
			cin>>rno;
			cout<<"Enter the name ";
			cin>>name;
		}
		void dispInfo()
		{
			cout<<" Roll no = "<<rno<<endl;
			cout<<" Name    = "<<name<<endl;
		}
};
class Marks : private Stud
{
protected :
int sem1,sem2;
public :
	void getMarks()
    {	
    	getInfo();
    	cout<<"Enter marks of sem1 ";
    	cin>>sem1;
		cout<<"Enter marks of sem2 ";
    	cin>>sem2;
	}	
	void dispMarks()
	{
		dispInfo();
		cout<<"Marks of sem1 "<<sem1<<endl;
		cout<<"Marks of sem2 "<<sem2<<endl;
	}
};
class Result : protected Marks
{
	int total;
	public :
		void get_total()
		{
			getMarks();
			total= sem1 + sem2;
		}
		void disp_total()
		{	
			dispMarks();
			cout<<"Total = "<<total<<endl;
		}
};
int main()
{
	Result r1;
	r1.get_total();
	cout<<"======================================\n";
	r1.disp_total();
	getch();
	return 0;	
}
