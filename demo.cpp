#include<bits/stdc++.h>

using namespace std;

int main()
{
	int l=0,ca=0,cnt=0,cb=0,first=0,last=0;
	cin>>l;
	fflush(stdin);
	
	int aa=0;
	int bb=0;
char s[l];
for(int i=0;i<l;i++)
{
	cin>>s[i];
	if(s[i]=='A')
	aa++;
	else if(s[i]=='B')
	bb++;
}
	for(int i=l-1; i>=0; i++)
	{
		if(s[i]=='-')
		{
			cnt++;
		}
		if(s[i]=='B')
		{
			last=i;
			cb+=cnt;
			//cb++;
			break;
		}
		else if(s[i]=='A')
		{
			last=i;
			//ca++;
			cnt=0;
			break;
		}
	}
	for(int i=0; i<l; i++)
	{
		if(s[i]=='-')
		{
			cnt++;
		}
		if(s[i]=='A')
		{
			first=i;
			ca+=cnt;
			break;
		}
		else if(s[i]=='B')
		{
			first=i;
			cnt=0;
			break;
		}
	}
	int li=first;
	for(int i=first+1; i<last; i++)
	{
		if(s[i]=='-')
		{
			cnt++;
		}
		else if(s[i]=='A' && s[li]=='A')
		{
			ca+=cnt;
			cnt=0;
			li=i;
		}
		else if(s[i]=='B' && s[li]=='B')
		{
			cb+=cnt;
			cnt=0;
			li=i;
		}else if(s[i]=='A' && s[li]=='B')
		{
			ca+=cnt/2;
			cb+=cnt/2;
			cnt=0;
			li=i;
		}else if(s[i]=='B' && s[li]=='A')
		{
			li=i;
			cnt=0;
		}
	}
	ca+=aa;
	cb+=bb;
	if(ca>cb)
	{
		cout<<"A";
	}
	else if(ca<cb)
	{
		cout<<"B";
	}
	else{
		cout<<"Coalition government";
	}
}
