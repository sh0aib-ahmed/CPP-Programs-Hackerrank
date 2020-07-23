#include<iostream>
using namespace std;
class table
{
	int num;
	public:
		void printtable()
		{
			cout<<"\nEnter the number you want table of : ";
			cin>>num;
			cout<<endl;
			for(int i=1;i<=10;++i)
				cout<<num<<"*"<<i<<" = "<<num*i<<endl;
		}		
};
int main()
{
	table ob;
	ob.printtable();
	cout<<endl<<endl<<endl;
	return 0;
}
