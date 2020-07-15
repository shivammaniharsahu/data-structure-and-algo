#include<iostream>
using namespace std;
int main()
{
	int i,j=0,n,ar[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n-1;i++)
	{
		if(ar[i]!=ar[i+1])
		{
			ar[j]=ar[i];
			j++;
		}
	}
	ar[j]=ar[n-1];
	for(i=0;i<=j;i++)
	{
		cout<<ar[i]<<"\t";
	}
}
