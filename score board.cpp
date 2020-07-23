#include <iostream>
using namespace std;
int main()
{
	
	int a[3],b[3],a1=0,b1=0;
	for(int i=0;i<3;i++)
	{
		cin>>a[i];
		cin>>b[i];
		if(a[i]>b[i])
		{
         a1 = a1+1;
		}
		else if(b[i]>a[i])
		{
			b1 = b1 + 1;
		}
		
	}
	cout<<a1<<" "<<b1;
	return 0;
}