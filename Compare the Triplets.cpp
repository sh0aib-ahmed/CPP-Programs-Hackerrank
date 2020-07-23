#include <iostream>
using namespace std;
int main()
{
	int a[3],b[3],a1=0,b1=0;
	for(int i=1;i<=3;i++)
	{
		cin>>a[i];
		cin>>b[i];
		if(a[1]>b[1])
		{
			a1 = a1+1;
		}
		if(a[2]>b[2])
        {
			a1 = a1+1;
		}
		if(a[3]>b[3])
        {
			a1 = a1+1;
		}
        if(b[1]>a[1])
		{
			b1 = b1+1;
		}
        if(b[2]>a[2])
		{
			b1 = b1+1;
		}
        if(b[3]>a[3])
		{
			b1 = b1+1;
		}
		
			
	}
	cout<<a1<<" "<<b1;
	
	return 0;
}