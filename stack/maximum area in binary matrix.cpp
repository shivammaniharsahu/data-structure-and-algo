#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<int> nearestleftelement(vector<int> ar,vector<int> &v,int n)
{
	
		stack<pair<int,int> >  s;
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

vector<int> nearestrightelement(vector<int> ar,vector<int> &v,int n)
{
	
		stack<pair<int,int> >  s;
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



int area(vector<int> ar)
{
	
		int n=ar.size();
	    vector<int> left;
	    vector<int> right;
	 	left=nearestleftelement(ar,left,n);
		right=nearestrightelement(ar,right,n);
		int width[n];
		int area[n];

		int i,j;
		for(int i=0;i<n;i++)
		{
			width[i]=right[i]-left[i]-1;
		}
		for(i=0;i<n;i++)
		{
			area[i]=ar[i]*width[i];
		}
		int max1=area[0];
		for(i=1;i<n;i++)
		{
			max1=max(area[i],max1);
		}
		return max1;
		
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i,m,j;
	    cin>>n;
	    cin>>m;
	    vector<int> v;
	    int M[n][m];
	    for(i=0;i<n;i++)
	    {
	    	for(j=0;j<m;j++)
	    	{
	    		cin>>M[i][j];
			}
		}
			for(j=0;j<m;j++)
	    	{
	    		v.push_back(M[0][j]);
			}
		int	mx=area(v);
		
	    for(i=1;i<n;i++)
	    {
	    	for(j=0;j<m;j++)
	    	{
	    		if(M[i][j]==0)
	    		v[j]=0;
	    		else
	    		v[j]+=M[i][j];
			}
			mx=max(mx,area(v));
		}
	    cout<<mx;
	}
	return 0;
}
