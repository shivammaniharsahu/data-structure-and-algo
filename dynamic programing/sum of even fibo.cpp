#include<iostream>
using namespace std;
int main()
 {
     int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int i,ar[n];
	    ar[0]=0;
	    ar[1]=1;
	    long long int sum=0;
	    for(i=2;i<=n;i++)
	    {
	        ar[i]=ar[i-1]+ar[i-2];
	        if(ar[i]%2==0)
	        {
	        	
		    	if(ar[i]>n)
		    	{
		    		break;
				}
	            sum=sum+ar[i];
	            //cout<<"hey"<<sum;
	        }
			
	    }
	    cout<<sum;
	    cout<<endl;
	}
	return 0;
}
