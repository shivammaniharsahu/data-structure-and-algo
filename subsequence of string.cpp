#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,l1,l2,j,s=0,l=0;
	string s1,s2;
	cin>>s1;
	cin>>s2;
	l1=s1.length();
	
	l2=s2.length();
	for(int i=0;i<l2;i++)
	{
		
		for(j=l;j<l1;j++)
		{
			if(s2[i]==s1[j])
			{
				l++;
				s++;
				break;
			}
		}
	}
	if(s==l2)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
}

