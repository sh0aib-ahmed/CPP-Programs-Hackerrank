#include <iostream>
using namespace std;
int main()
{
	int n;
	float a1=0,b1=0,c1=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	   if(a[i]>0)
	   {
	   	a1++;
	   }
	   else if(a[i]<0)
	   {
	   	b1++;
	   }
	   else if(a[i]==0)
	   {
		   c1++;
	   }
	} 
	cout<<a1/n<<endl;
	cout<<b1/n<<endl;
	cout<<c1/n<<endl;  
	   	
	return 0;
}