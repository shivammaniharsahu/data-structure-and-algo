#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nn=n,c=0;
	vector<int> v;
	while(nn!=0)
	{
		c++;
		int a=nn%10;
		v.push_back(a);
		nn/=10;
	}
	reverse(v.begin(),v.end());
	for(int i=0;i<c/2;i++)
	{
		v.erase(v.begin()+i+1);
	}
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<" ";
	}
	
}
