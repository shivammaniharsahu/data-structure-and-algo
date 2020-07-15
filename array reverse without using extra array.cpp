#include<iostream>
//#include<algorithm>
using namespace std;
int main()
{
	int i,j,k,n,arr[100];
	cout<<"Enter size";
	cin>>n;
	cout<<"Enter values =\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int s=0,end=n-1;
	while(s<end)
	{
		swap(arr[s],arr[end]);
		s=s+1;
		end=end-1;
	}
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<"\t";
	}
	return 0;
	
}
