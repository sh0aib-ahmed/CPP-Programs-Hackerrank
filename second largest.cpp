#include <iostream>
using namespace std;
int main()
{
	int a=0,b=0,c=0,n=0;
	cout<<"enter three numbers :";
	cin>>a>>b>>c;
	if(a>b&&a<c)
	 n=a;
	else if(b>a&&b<c)
		n=b;
	else 
		n=c;
	cout<<n<<endl;
	return 0;
}