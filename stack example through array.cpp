#include<iostream>
using namespace std;
int main()

{
	int t;
	cin>>t;
	while(t--)
	{
			
		int n,i;
		cin>>n;
		int ar[n],br[n]={0},l=0;
		for(i=0;i<2*n-2;i++)
		{
			cin>>ar[i];
		}
		for(i=0;i<=2*n-2;i+=2)
		{
			
			 if(ar[i]==1)
			{
				br[l]=ar[i+1];
				
			}
			else if(ar[i]==2)
			{
				if(br[0]==0)
				{
					
					cout<<"-1 ";	
				}
				else
				{
					cout<<br[l]<<" ";
					l--;
				}
				l++;
			}
			
		}	
		cout<<endl;
	}
	
}
