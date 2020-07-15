#include<iostream>
using namespace std;
int  main()
{
	int a,n,c=0,b;
	cout<<"Enter your number = ";
	cin>>n;
	while(n)
	{
		n=n&(n-1);
		c++;
	}
	cout<<"Number of one's in given number in binary is = "<<c;
	
}
