#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,k,j;
		cin>>n>>k;
		ll x[n],y[n];
		string s;
		cin>>s;
		bool flag=false;
		int cc=0,bb=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='0')
			bb++;
			else
			cc++;
		}
		int a=n/k;
		if(bb%a!=0)
		flag=true;
		if(cc%a!=0)
		flag=true;
		if(flag==1)
		cout<<"IMPOSSIBLE";
		else
		{
			int b1=bb/a;
			int b2=cc/a;
			string ans="";
			for(int i=0;i<b1;i++)
			ans.push_back('0');
			for(int i=0;i<b2;i++)
			ans+='1';
			string ans1=ans;
			string r="";
			reverse(ans.begin(),ans.end());
			for(int i=0;i<a;i++)
			{
				if(i%2==0)
				r+=ans1;
				else
				r+=ans;
			}
			cout<<r;
			
		}
		
		cout<<endl;
		
	}
	
}
