//binary input output
//43.A program to demonstrate writing and reading object to file
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class product
{
	int pid,qty;
	char pname[30];
	public :
		void getInfo()
		{
			cout<<"Enter product id";
			cin>>pid;
			cout<<"Enter product name";
			cin>>pname;
			cout<<"Enter product quantity";
			cin>>qty;
		}
		void display()
		{
			cout<<"product id = "<< pid <<endl;
			cout<<"product name = "<< pname <<endl;
			cout<<"product quantity = "<< qty <<endl;
		}
};
int main()
{
product p1;
p1.getInfo();
ofstream fout;
fout.open("object.dat");
fout.write((char *)&p1,sizeof(p1));		//writing to the file 
cout<<" file is written....\n";
fout.close();
product copyP1;
ifstream fin("vj.dat");
fin.read((char *)&copyP1,sizeof(copyP1));
cout<<"-------------- File Content ---------------\n";
fin.close();
copyP1.display();

}
