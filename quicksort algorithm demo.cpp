#include<iostream>
#include<algorithm>
using namespace std;
int quicksort(int ar[],int,int);
int partion(int ar[],int,int);
int main()
{
	int i,n,lb=0,ub;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	quicksort(ar,lb,ub);
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
}
int quicksort(int ar[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partion(ar,lb,ub);
		quicksort(ar,lb,loc-1);
		quicksort(ar,loc+1,ub);
	}
}
int partion(int ar[],int lb,int ub)
{
	int pivot=ar[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(ar[start]<=pivot&&start<end)
		{
			start+=1;
		}
		
		while(ar[end]>pivot)
		{
			end-=1;
		}
		if(start<end)
		{
			swap(ar[start],ar[end]);
		}
	}
	ar[lb]=ar[end];
	ar[end]=pivot;
	return end;
}
