#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,len,n,k=0,j;
	    set<char> s3;
	    char a[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	    int br[26]={0};
	    int cr[26]={0};
		//map<char,int> m;
    	string s1,s2;
    	cin>>s1;
    	cin>>s2;
    	for(i=0;i<s1.length();i++)
    	{
			for(j=0;j<26;j++)
			{
				if(s1[i]==a[j])
				{
					br[j]=1;	
					//cout<<br[j]<<" ";
				}
			 } 
		}
		
    		// cout<<endl;
    	for(i=0;i<s2.length();i++)
    	{
			for(j=0;j<26;j++)
			{
				if(s2[i]==a[j])
				{
					cr[j]=1;
					//cout<<br[j]<<" ";
				}
			 } 
			 
		}
		
    		 //cout<<endl;
			for(j=0;j<26;j++)
			{
				if(br[j]-cr[j]!=0)
				{
					s3.insert(a[j]);
				//	cout<<a[j]<<" ";
				}
			 } 
			  set <char> :: iterator itr;
			   for (itr = s3.begin(); itr != s3.end(); ++itr) 
    			{ 
        			cout<< *itr; 
    			}  

		cout<<endl;
	}
	return 0;
}
