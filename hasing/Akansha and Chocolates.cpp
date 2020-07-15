#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        cin>>x;
        int i,ar[n];
        for(int i=0;i<n;i++){
        cin>>ar[i];
        }
        sort(ar,ar+n);
        if(ar[0]==1)
        {
        	cout<<"Impossible";
		}
		else
		{
					int k=0,m,f=0;
	        for(i=0;i<n;i++)
	        {	k++;m=0;
	        	while((ar[i]>k&&m<x))
	        	{
	        		m++;
	        		
	        		i++;
	        		if(i==n)
	        		{
	        			f=1;
	        			break;
					}
				}
			}
			if(f==1)
			{
				cout<<"Possible";
			}
			else
			{
				cout<<"Impossible";
			}
			cout<<endl;
		}
       
        cout<<endl;
        
        
    }
	//code
	return 0;
}
