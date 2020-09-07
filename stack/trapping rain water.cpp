#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    
	    long i,n;
	    cin>>n;
	    long  mx[n],mx1[n],ar[n],wr[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	    }
	    mx1[0]=ar[0];
	    for(i=1;i<n;i++)
	    {
	        mx1[i]=max(mx1[i-1],ar[i]);
	    }
	    
	    mx[n-1]=ar[n-1];
	    for(i=n-2;i>=0;i--)
	    {
	        mx[i]=max(mx[i+1],ar[i]);
	    }
	    
	    for(i=0;i<n;i++)
	    {
	        wr[i]=min(mx[i],mx1[i])-ar[i];
	    }
	    long long sum=0;
	    
	    for(i=0;i<n;i++)
	    {
	      sum+=wr[i];
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
