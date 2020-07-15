#include <limits>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[1],i,j,n,min_jump_arr[100],arr[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	/*for(i=0;i<n;i++)
	{
		min_jump_arr[i]= std::numeric_limits<int>::max();
	}*/
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(i<=j+arr[j])
			{
				min_jump_arr[i]=min(min_jump_arr[i],min_jump_arr[j]+1);
		
			}
		}
		cout<<min_jump_arr[i]<<"\t";
	}
	return 0;
}
