#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,k,j;
		cin>>n>>k;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		//std::deque<int> Qi(k); 
		deque<int> dq(k);
		vector<int> v;
		for(i=0;i<k;i++)
		{
			while(!dq.empty()&&ar[i]>=ar[dq.back()])
			dq.pop_back();
			dq.push_back(i);
		}
		
		for(;i<n;i++)
		{
			v.push_back(ar[dq.front()]);
			while((!dq.empty())&&dq.front()<=i-k)
			dq.pop_front();
			while((!dq.empty())&&ar[i]>=ar[dq.back()])
			dq.pop_back();
			dq.push_back(i);
		}
		v.push_back(ar[dq.front()]);
		for(i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		v.clear();
		
	}
	
}
