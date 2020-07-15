#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int i,len,n,a;
    	vector<long long int> s1,s2;
    	cin>>n;
    	for(i=0;i<n;i++)
    	{
    		cin>>a;
    		s1.push_back(a);
    	}
    	
    	for(i=0;i<n;i++)
    	{
    		cin>>a;
    		s2.push_back(a);
    	}
    	sort(s1.begin(),s1.end());
    	
    	sort(s2.begin(),s2.end());
    	if(s1==s2)
    	{
    		cout<<1;
		}
		else
		{
			cout<<0;
		}
		cout<<endl;
	}
	return 0;
}
