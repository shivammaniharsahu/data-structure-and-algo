#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> nearestleftelement(ll ar[],vector<ll> &v,ll n)
{
	
		stack<pair<ll,ll> >  s;
		int i,ans;
		
		for(i=0;i<n;i++)
		{
			if(s.empty())
			v.push_back(-1);
			else
			{
				if(!s.empty()&&s.top().first<ar[i])
				{
					ans=s.top().second;
					v.push_back(ans);
				}
				else 
				{
					while(!s.empty()&&s.top().first>=ar[i])
					{
						s.pop();
					}
					if(s.empty())
					{
						v.push_back(-1);
					}
					else
					{
						ans=s.top().second;
						v.push_back(ans);	
					}
				}
			}
			s.push({ar[i],i});
		}
		return v;
}

vector<ll> nearestrightelement(ll ar[],vector<ll> &v,ll n)
{
	
		stack<pair<ll,ll> >  s;
			int i,ans;
		
		for(i=n-1;i>=0;i--)
		{
			if(s.empty())
			v.push_back(n);
			else
			{
				if(!s.empty()&&s.top().first<ar[i])
				{
					ans=s.top().second;
					v.push_back(ans);
				}
				else 
				{
					while(!s.empty()&&s.top().first>=ar[i])
					{
						s.pop();
					}
					if(s.empty())
					{
						v.push_back(n);
					}
					else
					{
						ans=s.top().second;
						v.push_back(ans);	
					}
				}
			}
			
			s.push({ar[i],i});
		}
		reverse(v.begin(),v.end());
		return v;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i;
	    cin>>n;
	    vector<ll> left;
	    vector<ll> right;
	    ll ar[n];
	    for(i=0;i<n;i++)
	    {
	    	cin>>ar[i];
		}
		left=nearestleftelement(ar,left,n);
		right=nearestrightelement(ar,right,n);
		ll width[n];
		ll area[n];

		
		for(i=0;i<n;i++)
		{
			width[i]=right[i]-left[i]-1;
		}
		for(i=0;i<n;i++)
		{
			area[i]=ar[i]*width[i];
		}
		ll max1=area[0];
		for(i=1;i<n;i++)
		{
			max1=max(area[i],max1);
		}
		cout<<max1<<"\n";
		
	}
	return 0;
}
