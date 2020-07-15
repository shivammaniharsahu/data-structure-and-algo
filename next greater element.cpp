/*#include<iostream>
using namespace std;
int main()
{
	int i,n,k,t;
	cin>>n;
	int ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[j]>ar[i])
			{
				cout<<ar[j]<<" is next greater element of "<<ar[i]<<endl;
				break;
			}
			if(j==n-1)
			{
				cout<<"No Next Greater element than "<<ar[i]<<endl;
			}
		}
	}
	cout<<"No Next Greater element than "<<ar[n-1]<<endl;
	return 0;
}*/


/* C++ program for finding Next Greater Element Present in an Array  */
#include <bits/stdc++.h> 
using namespace std; 

void NextGreaterElementMajority(int arr[], int size) 
{ 
	int i,j;
	for(i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]>arr[i])
			{
				cout<<arr[j]<<" is next greater element of "<<arr[i]<<endl;
				break;
			}
			if(j==size-1)
			{
				cout<<"No Next Greater element than "<<arr[i]<<endl;
			}
		}
	}
	cout<<"No Next Greater element than "<<arr[size-1]<<endl;
} 

// Driver code 
int main() 
{ 
	int arr[] = {3, 6, 2, 8 ,7 ,11, 14, 12}; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	// Function calling 
	NextGreaterElementMajority(arr, n); 

	return 0; 
} 

// This code is contributed by codeMan_d 

