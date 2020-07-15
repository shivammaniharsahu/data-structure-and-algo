#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s1;
		cin>>s;
		int i,f=0;
		set<char> ss;
		set<char>::iterator itr;
		
		int n=s.length();
		for(i=0;i<n;i++)
		{
			ss.insert(s[i]);
		}
		
		int k;
		map<char,int> mp; 
		for(i=0;i<n;i++)
		{
				int c=mp[s[i]]++;
				//cout<<c<<" ";
				
				if(c==0)
				{
					s1[k]=s[i];
				//cout<<s1[k]<<" ";
					k++;
				}
				else if(c==1)
				{
					mp[s[i]]=-1;
					i-=1;
					k=0;
				}
				
		}
			for(i=0;i<k;i++)
			{
				cout<<s1[i];
			}
		
		cout<<endl;
			
			
	}
}
