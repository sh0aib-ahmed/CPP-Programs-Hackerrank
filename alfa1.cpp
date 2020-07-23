#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main()
{
	char x;
	int res;
	cout<<"Enter the character to get its position = "<<endl;
	cin>>x;
	res=x-96;
	cout<<res<<" is the position of the character "<<endl;
	
	return 0;
}