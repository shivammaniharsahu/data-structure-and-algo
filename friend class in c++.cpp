#include<iostream>
using namespace std;
class myclass1
{
	friend class myclass2;
	int x;
	public :
		myclass1(int a)
		{
			x=a;
		}
};
class myclass2
{
	public :
		void showdata(myclass1 obj)
		{
			cout<<"X value is = "<<obj.x;
		}
};
int main()
{
	myclass1 obj1(5);
	myclass2 obj2;
	obj2.showdata(obj1); 
}
