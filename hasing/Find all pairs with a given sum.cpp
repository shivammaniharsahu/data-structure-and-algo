#include<bits/stdc++.h>
using namespace std;
int binarysearch(long int br[],long int size, long int ele)
{
	int beg=0,end=size-1,mid;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(br[mid]==ele)
		{
			return br[mid];
		}
		else if(br[mid]<ele)
		{
			beg=mid+1;
		}
		else 
		{
			end=mid-1;
		}
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long int n,i,j,m,x,s=0;
		cin>>n>>m>>x;
		long int a,c=0,r,p,ar[n],br[m];
		map<int,int> mp;
		for(i=0;i<n;i++)
		{
				cin>>ar[i];
			//	cout<<p<<" ";
		}
		for(i=0;i<m;i++)
		{
				cin>>br[i];
			//	cout<<p<<" ";
		}
		//cout<<endl;
		sort(br,br+n);
		c=0;
		for(i=0;i<n;i++)
		{		
			int res=binary_search(br,br+m,abs(x-ar[i]));
			if(res)
			{
				c++;
			}
		}
		//cout<<"c="<<c<<endl;
		for(i=0;i<n;i++)
		{		
			
			int res=binarysearch(br, n,abs(x-ar[i]));
			
			if(res!=-1)
			{
				cout<<ar[i]<<" "<<res;
				if(--c)
				{
					cout<<", ";
				}
			}
			else
			{
				s++;
			}
		}
		if(s==n)
		{
			cout<<"-1";
		}
		cout<<endl;
	}		
}
