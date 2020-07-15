#include<iostream>
using namespace std;
class Distance
{
	private :
		int meter;
	public :
		Distance()
		{
			meter=0;
		}
		void take()
		{
		cout<<"Enter distance in meters = ";
		cin>>meter;
		}
		void display()
		{
			cout<<"Meter value = "<<meter;
		}
		~Distance()
		{
			meter=0;
		}
		friend void advance(Distance &d);
};
void advance(Distance &d)
{
	if(d.meter>1)
	d.meter=d.meter;
}
int main()
{
	Distance d1;
	d1.take();
	d1.display();
	cout<<"\n";
	advance(d1);
	d1.display();
	cout<<"\n";		
}
