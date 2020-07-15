#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s=to_string(n);
		sort(s.begin(),s.end());
		int f=0;
		do
		{
			//cout<<s<<endl;
			if(stoi(s)%8==0)
			{
				f=1;
				break;
			}
		}	while(next_permutation(s.begin(),s.end()));
		if(f==1)
		{
			cout<<"Yes"<<endl; 
		}
		
		else
		{
		  cout<<"no"<<endl; 
		} 
	} 
	return 0;
}
