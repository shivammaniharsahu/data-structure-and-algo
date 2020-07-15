//kadanes algorithm
#include<iostream>
using namespace std;
int main()
{
	int n,i,j,max_so_far,max_end_here=0;
	cout<<"Enter lenght of array element\n";
	cin>>n;
	int ar[n];
	cout<<"Enter array values \n";
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
		}
		if(max_end_here<0)
		{
			max_end_here=0;
		}
	}
	cout<<"Max sum of your sub array is = "<<max_so_far;
	return 0;
}
