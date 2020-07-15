
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
  	cin>>n;
  	int sum=0,i,j;
  	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			 if( ( ar[j]-ar[i] ) > 1)
			 {
			 	sum=sum+ar[j] - ar[i];
			 }
		}
	}
	cout<<sum;
	
}
	 
}
