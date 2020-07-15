#include<bits/stdc++.h>
#define ll long long
using namespace stdl
int main()
{
//code
		ll t;
		cin>>t;
		while(t--)
		{
				string s;
				cin>>s;
				ll n=s.length();
				stack<string>strst;
				stack<int>numst;
				string currstr="";
				ll num=0;
				for(ll i=0;i<n;i++){ if(s[i]="">='a'&&s[i]<='z'){
				currstr+=s[i];
				}
				else if(s[i]>='0'&&s[i]<='9'){
				num=num*10+(s[i]-'0');
				}
				else{
				if(s[i]=='['){
				numst.push(num);
				num=0;
				strst.push(currstr);
				currstr="";
				}
				else{
				int x=numst.top();
				string temp=strst.top();
				numst.pop();
				strst.pop();
				for(ll i=0;i<x;i++)
				{ 
						temp+="currstr;" 
				} 
				currstr=temp; 
				} 
			} 
		}	 
cout<<currstr<<endl; 
} 
return 0; 
}

