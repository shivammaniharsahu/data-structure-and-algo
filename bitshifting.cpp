#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,s,p;
		string ss;
		char ch;
		cin>>n>>m>>ch;
		int ar[20],br[20];
		int nn=n,k=0,l=0;
		while(nn!=0)
		{
			ar[k++]=nn%2;
			nn/=2;	
		}
		
		for(i=0;i<=16-k;i++)
		{
			br[l++]=0;
		}
		l--;
		for(i=k-1;i>=0;i--)
		{
			br[l++]=ar[i];
		}	
		
//		for(i=0;i<16;i++)
//		{
//			cout<<br[i];
//		}	
//	//	cout<<endl;
		if(ch=='L')
		{
			m=m;
		}
		else if(ch=='R')
		{
			m=16-m;
		}
		for(j=0;j<m;j++)
		{
			    int temp = br[0]; 
		    	for ( p = 0; p < 15; p++) 
		    	    br[p] = br[p + 1]; 	
		    	br[p] = temp;	
		} 
//		for(i=0;i<16;i++)
//		{
//			cout<<br[i];
//		}	
//		cout<<endl;
		int sum=0;
		k=0;
		for(i=15;i>=0;i--)
		{
			sum=sum+br[i]*pow(2,k++);
//			cout<<sum<<" ";
		}	
		cout<<sum;
		cout<<endl;
			 
		
	}
}

