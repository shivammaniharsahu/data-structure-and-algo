#include<iostream>
using namespace std;
int main()
 {
     int t;
	cin>>t;
	while(t--)
	{
	    int i,n;
	    cin>>n;
	    int ar[n]={0};
	    ar[0]=0;
	    ar[1]=1;
	    cout<<"1 ";
	    for(i=2;i<=n;i++)
	    {
	        ar[i]=ar[i-1]+ar[i-2];
	        cout<<ar[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
