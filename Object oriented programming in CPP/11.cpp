/*11.WAP to define member function : a) Inside the class
									 b) Outside the class */
#include<iostream>
#include<conio.h>
#include<String.h>
using namespace std;
class Employee
{

	int empId;
	char ename[30];
	float sal;
public:
	void setInfo(int eId, char eNm[],float s)  //member function inside the class
	{
		empId=eId;
		strcpy(ename,eNm);
		sal=s;
	}
	void dispInfo(); //declaration of member function

};	 
	void Employee::dispInfo()    //member function outside the class
	{
		cout<<"Employee Id="<<empId<<endl;
		cout<<"Employee Name="<<ename<<endl;
		cout<<"Employee Salary="<<sal<<endl;
	}
int main()
{
Employee e1;
e1.setInfo(101,"vijaya",100000);
e1.dispInfo();
cout<<"----------------------------------------------------\n";
Employee e2;
e2.setInfo(102,"aish",100000);
e2.dispInfo();	
getch();	
return 0;
}	
