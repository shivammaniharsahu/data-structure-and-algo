#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,i,j,s,f=0;
		cin>>n;

		if(n%4!=0)
		{
			cout<<"NO";
		}
		else
		{
			cout<<"YES\n";
			long long int sum=0;
			for(i=2;i<=n;i+=2)
			{
				cout<<i<<" ";
				sum=sum+i;
			}
			
			for(i=1;i<n-1;i+=2)
			{
				cout<<i<<" ";
				f=f+i;
			}
			cout<<sum-f;
		}		
		cout<<endl;
	}
	return 0;
}
