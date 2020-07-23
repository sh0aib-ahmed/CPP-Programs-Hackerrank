#include<iostream>
#include<stdio.h>
using namespace std;
class employee
{
	int age,empno;
	char name[20],city[20],desgn[10];
	public:
		void entry();
		void display();		
};

void employee::entry()
{
	cout<<"\nEnter employee NUMBER : ";
	cin>>empno;
	cout<<"\nEnter employee NAME : ";
	cin>>name;
	cout<<"\nEnter employee AGE : ";
	cin>>age;
	cout<<"\nEnter employee CITY : ";
	cin>>city;
	cout<<"\nEnter employee DESIGNATION : ";
	cin>>desgn;
}
void employee::display()
{   cout<<"\n##############################################################################\n";
	cout<<"\nDetails of the employee with EMPLOYEE NUMBER : "<<empno<<" are as follows : ";
	cout<<"\nEmployee NUMBER : "<<empno;
	cout<<"\nEmployee NAME : "<<name;
	cout<<"\nEmployee AGE : "<<age;
	cout<<"\nEmployee CITY : "<<city;
	cout<<"\nEmployee DESIGNATION : "<<desgn;
	
}
int main()
{   int n;
	employee ob[10];
	cout<<"\nHow many records do you want to insert( MAX 10): ";
	cin>>n;
	cout<<"Enter details of " <<n<<" employees : ";
	for(int i=1;i<=n;++i)
	{ cout<<"\nEnter details for Employee : "<<i<<endl;
		ob[i].entry();
		cout<<"\n***************************************************************************";}
	cout<<"\nDetails Entered by You are : ";
	for(int i=1;i<=n;++i)
		ob[i].display();
		return 0;
}
