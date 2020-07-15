#include<iostream>
using namespace std;
int main()
{
	int i,j,n,ar[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[j]>=ar[i])
			break;
		}
		if(j==n)
		{
			printf("%d is leader\n",ar[i]);
		}
	}
	return 0;
}
