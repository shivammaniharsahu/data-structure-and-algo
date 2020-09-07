#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int rodcutting(int price[], int n) 
{ 
   int val[n+1]; 
   val[0] = 0; 
   int i, j; 
  
   // Build the table val[] in bottom up manner and return the last entry 
   // from the table 
   for (i = 1; i<=n; i++) 
   { 
       int max_val = INT_MIN; 
       for (j = 0; j < i; j++) 
         max_val = max(max_val, price[j] + val[i-j-1]); 
       val[i] = max_val; 
   } 
  
   return val[n]; 
} 


int main()
{ 
	int t;
	cin>>t;
	while(t--)
	{
			int n,w;
			cin>>n;
			int ar[n];
			long  i,j,sum=0;
			for(i=0;i<3;i++)
			{
				cin>>ar[i];	
			}
			cout<<rodcutting(ar,n);
			cout<<endl;
	}
	return 0;
}
