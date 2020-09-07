#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int ar[n],i,ans;
	    vector<int> v;
	    stack<pair<int,int> > s;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];    
	    }
	    for(i=0;i<n;i++)
	    {
	    	cout<<ar[i]<<" ";
	        if(s.empty())
	        v.push_back(-1);
	        else if(!s.empty()&&ar[i]<s.top().first)
	        {
	        	ans=s.top().second;
	            v.push_back(ans);
	        }
	        else if(!s.empty()&&ar[i]>=s.top().first)
	        {
	            while(ar[i]>=s.top().first&&!s.empty())
	            {
	                s.pop();
	            }
	            if(s.empty())
	            v.push_back(-1);
	            else
	            {
	            	ans=s.top().second;
	                v.push_back(ans);
	            }
	            
	        }
	        s.push({ar[i],i});
	    }
	    for(i=0;i<v.size();i++)
	    {
	        v[i]=i-v[i];
	    }
	    for(i=0;i<v.size();i++)
	    {
	        cout<<v[i]<<" ";
	    }
	    v.clear();
	    while(!s.empty())
	    {
	    	s.pop();
		}
	    
	    cout<<endl;
	    
	}
	return 0;
}
