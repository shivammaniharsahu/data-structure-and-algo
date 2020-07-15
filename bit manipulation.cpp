#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			
		int i,j,n,bit,bits,c;
		cin>>n;
		int ar[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];	
		}
		c=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				bit=ar[i]^ar[j];
				bits=__builtin_popcount(bit);
				if(bits!=0)
				{
					c=c+bits*2;
				}
			}
			
		}
		
		cout<<c<<endl;
	}
}
