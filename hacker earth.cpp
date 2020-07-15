#include<iostream>
using namespace std;
int main()
{
	int a,b,i,s=1,min;
	cin>>a>>b;
	if(a>=b)
	{
		min=b;
	}
	1+2+3+4+5=15
	3*5=15
	4+4+4+4+4=20
	else if(a<b)
	{
		min=a;
	}
	for(i=2;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			s++;
		}
		
	}
	cout<<s;
}
