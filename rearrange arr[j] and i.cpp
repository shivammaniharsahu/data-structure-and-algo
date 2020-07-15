#include<iostream>
using namespace std;
int main()
{
	int i,n,ar[100],temp[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		temp[ar[i]]=i;
	}
	for(i=0;i<n;i++)
	{
		ar[i]=temp[i];
		cout<<ar[i]<<"\t";
	}
	return 0;
}
