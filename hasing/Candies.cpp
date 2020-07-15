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
//		long long int ar[n];
//		for(i=0;i<n;i++)
//		{
//			cin>>ar[i];
//		}
		s=1;
		
		for(i=1;i<n;i++)
		{
			s=s+pow(2,i);
			if(n%s==0)
			{
				f=1;
				cout<<n/s;
				break;
			}
			
		}
		cout<<endl;
	}
	return 0;
}
