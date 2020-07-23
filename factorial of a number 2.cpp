#include<iostream>
using namespace std;
int main()
{
	
	int num,fact=1,t;
	cout<<"Enter the number you want factorial of : ";
	cin>>num;
	t=num;
	
	while(num)
	{
		fact*=(num--);
	}
	cout<<"\nFatorial of "<<t<<" is "<<fact;
	return 0;
}
