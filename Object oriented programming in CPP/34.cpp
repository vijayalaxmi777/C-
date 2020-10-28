//34. multiple inheritence
#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
class Customer		//base class 1
{
	private:
		int accountNo;
		char name[30];
	public:
		void setInfo(int aNo, char nm[])	
		{
			accountNo=aNo;
			strcpy(name,nm);
		}
		void dispInfo()
		{
			cout<<"Account No is "<<accountNo<<endl;
			cout<<"Name = "<<name<<endl;
		}
};
class Balance // base class 2
{
	protected :
		float bal;
		public :
			void dispBal()
			{
				cout<<"Balance = "<<bal<<endl;
			}

};
class Banking : private Customer, private Balance
{
	private :
		float depositAmount;
		float withdrawAmount;
	public :
		void setBal(float b)
		{
			setInfo(101,"vijaya");
			bal=b;		
		}	
		void get_D_Amount()
		{
			cout<<"Enter the deposit amount\n";
			cin>>depositAmount;
		}
		void get_W_Amount()
		{
			cout<<"Enter the withdraw amount\n";
			cin>>withdrawAmount;
		}
		void after_D_Amount()
		{
			bal = bal + depositAmount;
			cout<<"Balance after deposit"<<endl;
			dispBal();
		}
		void after_W_Amount()
		{
			bal = bal - withdrawAmount;
			cout<<"Balance after withdraw"<<endl;
			dispBal();
		}
		void show()
		{
			dispInfo();
		}
};
int main()
{
	Banking b1;
	int choice;
	char ch;
	b1.setBal(100000);
	do{
	cout<<"Enter your choice \n";
	cout<<"1.Deposit\t2.Withdraw\t3.Exit\n";
	cin>>choice;
	switch(choice)
	{
		case 1:	b1.get_D_Amount();
				b1.show();
				b1.after_D_Amount();
				break;
		case 2:b1.get_W_Amount();
			   b1.show();
			   b1.after_W_Amount();
			   break;
		case 3:exit(0);
			default: cout<<"Wrong choice\n";
	}
	cout<<"Do you want to continue?[y/Y]";
	cin>>ch;
    }while(ch=='y'||ch=='Y');
	getch();
	return 0;	
}
