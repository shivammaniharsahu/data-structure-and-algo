#include<bits/stdc++.h>
using namespace std;

  
void countFreq(string s[], int n) 
{ 
    unordered_map<string, int> mp; 
  	
    for (int i = 0; i < n; i++)
	{
		mp[s[i]]++;
	//	cout<<c<<" ";
	 } 
	 int max=mp[s[0]];
	 string ss;
    for (int i = 0; i < n; i++)
	{
		if(mp[s[i]]>=max)
		{
		 	max=mp[s[i]];
		 	ss=s[i];
		}
	}
	cout<<ss<<endl;
    // Traverse through map and print frequencies 
   	
} 
  

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,len,n,k,j;
	    
	    cin>>n;
	    string s[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>s[i];
		}
		countFreq(s,n); 
		
	}
	return 0;
}
