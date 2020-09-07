#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
			int n,W;
			cin>>n;
			cin>>W;
			int wt[n],val[n];
			int i,j;
			for(i=0;i<n;i++)
			{
				cin>>wt[i];	
			}
			for(i=0;i<n;i++)
			{
				cin>>val[i];
			}
			int w; 
		    int K[n + 1][W + 1]; 
		  
		    // Build table K[][] in bottom up manner 
		    for (i = 0; i <= n; i++) { 
		        for (w = 0; w <= W; w++) { 
		            if (i == 0 || w == 0) 
		                K[i][w] = 0; 
		            else if (wt[i - 1] <= w) 
		                K[i][w] = max( 
		                    val[i - 1] + K[i - 1][w - wt[i - 1]], 
		                    K[i - 1][w]); 
		            else
		                K[i][w] = K[i - 1][w]; 
		        } 
		    } 
  
   			 cout<<K[n][W]; 
			cout<<endl;
	}
	return 0;
}
