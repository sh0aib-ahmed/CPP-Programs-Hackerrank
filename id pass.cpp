#include <iostream>
using namespace std;
int main()
{
	int GuserID,AuserID;
	char Apass[5], Gpass[5];
	cin>>AuserID;
	cin>>GuserID;
	if(GuserID == AuserID)
	{
		cout<<"welcome user "<<GuserID;
		cout<<"\n Enter password";
	}
	else 
	{
     cout<<"NO USER FOUND ";
     return 0;
	}
	for(int i=1;i<=5;i++)
	  cin>>Apass[i];
     for(int i=1;i<=5;i++)
	 {
	  cin>>Gpass[i];
      if(Gpass[i] == Apass[i] )
		cout<<"ACESS GRANTED !!! ";
		else 
		cout<<"ACESS DENIED !!!";
	 }
	
	return 0;
}