#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,i;
	    cin>>n;
	    long long int ar[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	     
        vector<long long int > v(n);
        stack<long long int> s;
        long long ans;
        for(i=0;i<n;i++)
        {
            if(s.size()==0)
                v.push_back(-1);
            else if(s.top()<ar[i])
            {
                ans=s.top();
                v.push_back(ans);
            }
            else if(s.top()>=ar[i])
            {
                while(s.size()>0&&s.top()>=ar[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    v.push_back(-1);
                else
                {
                    
                    ans=s.top();
                    v.push_back(ans);
                }

                
            }
                s.push(ar[i]);
            
        }
 reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
	    
	    
	    
	    
	}
	return 0;
}
