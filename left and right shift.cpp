#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	int n,m,i,ss=0,c=0,diff;
		
	
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>n>>m;
		if(n==0)
		{
			c+=m;
		}
		else if(n==1)
		{
			ss+=m;
		}
	}
			string s;
		cin>>s;
cout<<ss<<" "<<c<<endl;
			
			if(c>ss)
		{ 
		   diff=c-ss;
		   
			while(diff--)
			{
				
					char ch;
					ch=s[0];
					for(i=0;i<s.length()-1;i++)
					{
						s[i]=s[i+1];
					}
					s[i]=ch;		
			}
		}
		else if(ss<c)
		{
			diff=ss-c;
					cout<<diff<<endl;

			while(diff--)
			{
				
					char ch;
					ch=s[s.length()-1];
					for(i=s.length()-1;i>0;i--)
					{
						s[i]=s[i-1];
					}
					s[0]=ch;
			}
		}
		cout<<s<<endl;
}
