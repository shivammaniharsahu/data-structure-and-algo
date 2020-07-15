#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            
    	long long int i,j=0,k,n,mfr;
    	cin>>n;
    	long long int ar[n],br[n];
    	for(i=0;i<n;i++)
    	
    	{
    		cin>>ar[i];
    	}
    	mfr=ar[n-1];
    	for(i=n-2;i>=0;i--)
    	{
    		if(ar[i]>=mfr)
    		{
    			br[j++]=ar[i];
    			mfr=ar[i];
    		}
    	}
    	for(i=j-1;i>=0;i--)
    	{
    		cout<<br[i]<<" ";
		}
    	printf("%d",ar[n-1]);
    	cout<<"\n";
        
    }
}
