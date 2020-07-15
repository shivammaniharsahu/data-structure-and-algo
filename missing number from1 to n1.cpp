#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int w;
	cin>>w;
	while(w--)
	{
			
		int i,nn,n,t,ar[100],s=0,sum;
		cin>>nn;
	
		for(i=0;i<nn;i++)
		{
			cin>>ar[i];
		
		}
		
		for(i=0;i<nn;i++)
		{
			ar[i]=ar[i]^ar[i+1];
		t=ar[i];
		}
		cout<<t<<endl;
		return 0;
		
	}
}
