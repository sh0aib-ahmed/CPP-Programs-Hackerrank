#include<iostream>
using namespace std;
class Me
{
	public:
		int x;
		void show(int x);
};
void Me::show(int a)
{
	x = a;
	cout<<x;
}
int main()
{
	Me obj;
	obj.show(8); 
	return 0;
}