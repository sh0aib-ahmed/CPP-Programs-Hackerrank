#include<iostream>
using namespace std;
class circle 
{
	private : float a;
	public:
		float area(float r)
		{
          a=3.14*r*r;
		  return a;			
		}
};
int main()
{ circle ob; 
 float r;

	cout<<"Please enter the radius of circle(in units) : ";
	cin>>r;
	cout<<"\nArea of circle with radius "<<r<<" is "<<ob.area(r)<<" units^2.";
		return 0;
}
