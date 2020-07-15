#include<bits/stdc++.h>
using namespace std;

  
int countFreq(int arr[], int n,int k) 
{ 
    unordered_map<int, int> mp; 
  	int c;
    for (int i = 0; i < n; i++)
	{
		c=mp[arr[i]]++;
	//	cout<<c<<" ";
	 } 
	 
    for (int i = 0; i < n; i++)
	{
		if(mp[i]==k-1)
		{
			return arr[i];
			break;
		}
	 } 
	 return -1;
        
  
    // Traverse through map and print frequencies 
   	
} 
  

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,len,n,k,j,r=0;
	    
	    cin>>n;
	    int ar[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>ar[i];
	    	r=r^ar[i];
		}
		 cout<<r;
		cout<<endl;
	}
	return 0;
}
