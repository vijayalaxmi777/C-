//single level inheritence using private derivation
#include<iostream>
#include<conio.h>
using namespace std;
class Product
{
	int Id;
	float Price;
	char Name[30];
	public :
		void getInfo()
		{
			cout<<"Enter the values of Id";
			cin>>Id;
			cout<<"Enter the values of Name";
			cin>>Name;
			cout<<"Enter the values of price";
			cin>>Price;
		}
		void dispInfo()
		{
			cout<<"Product Id = "<<Id<<"\n";
			cout<<"Product Name = "<<Name<<"\n";
			cout<<"Product Price = "<<Price<<"\n";
		}
		float get_price()
		{
			return Price;
		}
};
class Sales :private Product
{
	private :
		int salesId,qty;
		float total;
		public :
			void getSales()
			{
				getInfo();
				cout<<"Enter sales id";
				cin>>salesId;
				cout<<"Enter quantity";
				cin>>qty;
			}
			void calTotal()
			{
				total = qty * get_price();
			}
			void dispSalesInfo()
			{
				dispInfo();
				cout<<"Sales Id = "<<salesId<<endl;
				cout<<"Quantity = "<<qty<<endl;
				cout<<"Total = "<<total;
			}
};
int main()
{
	Sales s1;
	s1.getSales();
	s1.calTotal();
	s1.dispSalesInfo();	
	getch();
	return 0;	
}
