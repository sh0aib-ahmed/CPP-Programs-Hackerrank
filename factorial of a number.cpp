#include <iostream>
using namespace std;
int main()
{
	int a;
	int c = 1;
	cout<<"enter the number";
	cin>>a;
	if(a==0)
	{
		cout<<"factorial is 1";
	}
	else 
	{
		for(int i=1;i<=a;i++)
		{
			c=c*i;
			
		}
		
		cout<<c;
	}
	
return 0;
	
}