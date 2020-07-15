#include<iostream>
using namespace std;
int merge_sort(int ar[],int,int);
int merge(int ar[],int,int,int);
int main()
{
	int i,n,p=0,r;
	cout<<"Enter number of array you want = ";
	cin>>n;
	int ar[n],br[n];
	r=n-1;
	cout<<"Enter array element \n";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	br[n]=merge_sort(ar,p,r);
	
		cout<<"Your element in sorted order using merge sort is \n";
	for(i=0;i<n;i++)
	{
		cout<<br[i];
	}
	
    		cout<<endl<<"SHIVAM MANIHAR SAHU\nROLL NO. - 18115077";
}
int merge_sort(int ar[],int p,int r)
{
	
	int br[r];
	int q;
	if(p<=r)
	{
		q=(p+r)/2;
	}
	merge_sort(ar,p,q);
	merge_sort(ar,q+1,r);
	br[r]=merge(ar,p,q,r);
	return br[r];
}
int merge(int ar[],int p,int q,int r)
{
	int i=p,j=q+1,n=r-p+1,k;
	
	int b[r];
	for(k=0;k<n-1;k++)
	{
		if((ar[i]<ar[j]||(j>r))&&(i<q))
		{
			b[k]=ar[i];
			i=i+1;
		}
		else
		{
			b[k]=ar[j];
			j=j+1;
		}
	}
	
	for(k=0;k<n-1;k++)
	{
			ar[p+k]=b[k];
	}
	
	for(k=0;k<n;k++)
	{
		cout<<ar[k]<<" ";
	}
	cout<<endl;
	return ar[r];
}
