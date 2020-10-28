//35. hirarchical inheritence
#include<iostream>
#include<conio.h>
using namespace std;
class Stock
{
	protected :
		int pId;
		char pName[30];
		int qty;
	public :	
		void getInfo()
		{
			cout<<"Enter product Id";
			cin>>pId;
			cout<<"Enter product name";
			cin>>pName;
			cout<<"Enter quantity of product";
			cin>>qty;
		}
		void dispInfo()
		{
			cout<<"Product Id = "<<pId<<endl;
			cout<<"Product Name = "<<pName<<endl;
			cout<<"Product Quantity = "<<qty<<endl;
		}
	
};
class Inward : private Stock
{
	private :
		int inwardQty;
	public :
		void getInfo()
		{
			Stock :: getInfo();
			cout<<"Enter Quatity for inward"<<endl;
			cin>>inwardQty;
		}	
		void stockAfterInward()
		{
			qty = qty+ inwardQty;
			dispInfo();
		}
};
class Sales : private Stock
{
	private :
		int salesQty;
	public :
		void getInfo()
		{
			Stock :: getInfo();
			cout<<"Enter the quantity for sales\n";
			cin>>salesQty;
		}	
		void afterSales()
		{
			qty=qty-salesQty;
			dispInfo();
		}
};
int main()
{
	Inward i1;
	i1.getInfo();
	i1.stockAfterInward();
	cout<<"-------------------------------------------------\n";
	Sales s1;
	s1.getInfo();
	s1.afterSales();
	getch();
	return 0;	
}
