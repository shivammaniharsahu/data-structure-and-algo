#include<iostream>
using namespace std;
int main()
{
	long long int i,j,k,n,max_so_far,max_end_here=0,start=0,end=0,s=0;

	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	max_so_far=ar[0];
	for(i=0;i<n;i++)
	{
		max_end_here=max_end_here+ar[i];
		if(max_so_far<max_end_here)
		{
			max_so_far=max_end_here;
			start=s;
			end=i+1;
		}
		if(max_end_here<0)
		{
			max_end_here=0;
			s=i+1;
		}
	}
	
	cout<<max_so_far;
	return 0;
}
