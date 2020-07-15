#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,nn,n,t,ar[100],s=0,sum;
	cin>>nn;
	n=nn-1;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		s=s+ar[i];
	}
	sum=(nn*(nn+1))/2;
	t=abs(s-sum);
	cout<<"Missing Number = "<<t;
	return 0;
}
