#include <iostream>

using namespace std;

     class op
     {
     	int a,b,sum,sub;
   	   public:
    	void get();
    	void add();
    	void subtract();
    	void show();
     };
     void op :: get()
     {
         cout<<"enter a,b, values :";
         cin>>a>>b;
     }
     void op :: add()
     {
         sum=a+b;
     }
     void op :: subtract()
     {
         sub=a-b;
     }
     void op :: show()
     {
         cout<<"sum is"<<sum;
         cout<<endl;
         cout<<"subtraction is "<<sub;
     }
     int main()
{
  op A;
  A.get();
  A.add();
  A.subtract();
  A.show();
  return 0;
}