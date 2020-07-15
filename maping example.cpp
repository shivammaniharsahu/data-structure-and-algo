#include<bits/stdc++.h>
using namespace std;

  
int countFreq(int arr[], int n,int k) 
{ 
    unordered_map<int, int> mp; 
  	int c;
    for (int i = 0; i < n; i++)
	{
		c=mp[arr[i]]++;
		cout<<c<<" ";
	 } 
	 
    for (int i = 0; i < n; i++)
	{
		if(mp[arr[i]]==k)
		{
			return arr[i];
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
	    int i,len,n,k,j;
	    set<char> s3;
	    cin>>n>>k;
	    int ar[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>ar[i];
		}
		  int res=countFreq(ar, n,k); 
		 cout<<res;
		 
		cout<<endl;
	}
	return 0;
}
