#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
	int a,n,b=0;
	cout<<"enter a";
	cin>>a;
	for(int i=1;i<a;i++ )
	{
		
		
		if(a%i==0)
			b++;
		
	}
if(b>2)
	cout<<"composite number";
else
{
	if(a==1)
		cout<<"neither prime nor composite";
	else
	
		cout<<"prime";
	

} 
	return 0;
}