#include<iostream>
#include<algorithm>
using namespace std;
int partion(int ar[],int,int);
int quicksort(int ar[],int,int);
int l=0;
int main()
{
	int ar[100],n,i,lb=0,ub;
	cout<<"Enter number of array you want = ";
	cin>>n;
	ub=n-1;
	cout<<"Enter array element \n";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	quicksort(ar,lb,ub);
		cout<<"Your element in sorted order using quick sort is \n";
	for(i=0;i<n;i++)
	{
		cout<<ar[i]<<" ";
	}
	
    		cout<<endl<<"SHIVAM MANIHAR SAHU\nROLL NO. - 18115077";
}
int quicksort(int ar[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partion(ar,lb,ub);
		quicksort(ar,lb-1,loc-1);
		quicksort(ar,loc+1,ub);
	}
}
int partion(int ar[],int lb,int ub)
{
	int pivot;
	
	pivot=ar[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(ar[start]<=pivot&&start<end)
		{
			start=start+1;
		}
		while(ar[end]>pivot)
		{
			end=end-1;
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

