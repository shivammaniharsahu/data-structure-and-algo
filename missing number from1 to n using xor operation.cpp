#include<iostream>
using namespace std;
int main()
{
	int i,n,t,ar[100],xor1=0,xor2=0,xor3;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	
	for(i=0;i<n;i++)
	{
		xor1 = xor1 ^ ar[i];
		cout<<xor1<<endl;
	}
	for(i=0;i<n;i++)
	{
		xor2 = xor2 ^ i;
	}
	xor3 = xor1^xor2;
	cout<<"Missing Number = "<<xor3;
	return 0;
}
