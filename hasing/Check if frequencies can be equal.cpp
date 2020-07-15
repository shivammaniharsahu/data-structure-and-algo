#include<bits/stdc++.h>
using namespace std; 
int countFreq(string arr) 
{ 
    unordered_map<int, int> mp; 
  	int c;
    for (int i = 0; i < arr.length(); i++)
	{
		c=mp[arr[i]]++;
		//cout<<c<<" ";
	} 
	
		if(mp[arr[0]]==mp[arr[1]])
		{
			c=mp[arr[0]];
			cout<<"he"<<c;
		}
		else if(mp[arr[0]]==mp[arr[3]])
		{
			c=mp[arr[0]];
			
			cout<<"she"<<c;
		} 
		
		else if(mp[arr[1]]==mp[arr[2]])
		{
			c=mp[arr[1]];
			
			cout<<"sshe"<<c;
		} 
		
		if(arr.length()%c==0||(arr.length()-1)%c==0)
		return 1;
		else
		return 0;
        
  
    // Traverse through map and print frequencies 
   	
} 
  

int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    
	    string s;
	    cin>>s;
		  int res=countFreq(s); 
		 cout<<res;
		cout<<endl;
	}
	return 0;
}
