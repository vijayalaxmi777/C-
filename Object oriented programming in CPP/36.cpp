//A program to calculate TAX using hybrid inheritence
#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
	private :
		int panId;
		char name[30];
	public :
		void getPersonInfo()
		{
			cout<<"Enter the Pan No";
			cin>>panId;
			cout<<"Enter the name ";
			cin>>name;
		}	
		void dispPersonInfo()
		{
			cout<<"Pan no = "<<panId<<endl;
			cout<<"Name = "<<name<<endl;
		}
	
};
class Income : private Person
{
	protected :
		float income;
	public :
		void getIncome()
		{
			getPersonInfo();
			cout<<"Enter income amount";
			cin>>income;
		}	
		void dispIncome()
		{
			dispPersonInfo();
			cout<<"Income = "<<income<<endl;
		}
};
class Percent_Income : private Person
{
	protected :
		float percentGeneral, noIncome;
	public :
		void set_Percent()
		{
			noIncome = 0;
			percentGeneral=10;
		}
};
class Tax : private Income , private Percent_Income
{
	private :
		float tax;
	public :
		void calTax()
		{
			getIncome();
			set_Percent();
			if(income <= 15000)
			{
				tax = noIncome;
			}
			else
			    tax = income * (percentGeneral/100);
				
		}	
		void dispTax()
		{
			dispIncome();
			cout<<"Tax = "<<tax<<endl;
		}
};
int main()
{
	Tax obj;
	obj.calTax();
	cout<<"---------------------------------------------\n";
	obj.dispTax();
	getch();
	return 0;	
}
