#include<iostream>
using namespace std;
class odev 
{
	private : int num;
	public:
		 void check()
		{  
		cout<<"Enter the number to check if it is even or odd(NOT IN DECIMAL) : ";
		cin>>num;
		cout<<endl;
          if(num%2==0)
          	cout<<num<<" is EVEN. ";
          else 
          	cout<<num<<" is ODD.";
		  			
		}
};
int main()
{
	
	odev ob;
	ob.check();
	cout<<endl<<endl<<endl;
	return 0;
}
