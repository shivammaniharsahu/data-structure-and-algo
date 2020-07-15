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
		int i;
		set<char> ss;
		set<char>::iterator itr;
		
		int n=s.length();
		for(i=0;i<n;i++)
		{
			ss.insert(s[i]);
		}
		
		int k;
		map<char,int> mp; 
		int sss=1,f=0,index,pos;
		for(i=0;i<n;i++)
		{
				int c=mp[s[i]]++;
				//cout<<c<<" ";
				
				cout<<endl;
				if(c==0&&sss==1)
				{
					if(s[i]==s[i+1])
					{
						f=1;	
					}
					sss=0;
					index=i;
					
					
				}
				else if(c==0)
				{
					pos=i;
				}
				
		}
		//cout<<s1.length();
		if(f==1)
		{
			cout<<(pos-index);	
		}
		else
		{	
			cout<<(pos-index)+1;
		}

		cout<<endl;
			
			
	}
}
