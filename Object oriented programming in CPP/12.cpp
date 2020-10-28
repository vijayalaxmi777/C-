/*12.WAP to define member function : a) Inside the class
									 b) Outside the class */
		// Book Information Store
#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
class Book
{
int bookId;
char bookName[30];
float bookPrice;
public:
	void setInfo(int bId,char bNm[],float bPr)		//member function inside the class
	{
		bookId=bId;
		strcpy(bookName,bNm);
		bookPrice=bPr;
	}
	void dispInfo(); 	//declaration of member function
};
void Book::dispInfo()		//member function outside the class
{
	cout<<"Book Id= "<<bookId<<endl;
	cout<<"Book Name= "<<bookName<<endl;
	cout<<"Book Price= "<<bookPrice<<endl;
}		
int main()
{
	Book b1;
	b1.setInfo(101,"let us C",1000);	//calling of function member
	b1.dispInfo();
	getch();
	return 0;	
}
