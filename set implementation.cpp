#include<bits/stdc++.h>
#include<algorithm>
#define	 ull unsigned long long  
using namespace std;
int main()
{
	ull i,x,n;
	cin>>n;
	ull ar[n];
	set<int> s;
	for(i=0;i<n;i++)
	{
		cin>>ar[n];
		s.insert(ar[n]);

	}
	ull s2=s.size(ar[n]);
	cout<<s2;
}
