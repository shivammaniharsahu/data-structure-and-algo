#include <bits/stdc++.h>
using namespace std;
 const long long mod=100000007;
long long countWays(int);
 
int main()
{

		int n;
		cin>>n;
		
		cout << countWays(n);
    
    return 0;
    
}
// } Driver Code Ends
// function to count number of ways to reach top of the stair
long long countWays(int n){
    if(n==1)
    return 1;
    long long ar[n+1],i;
    ar[0]=1;
	ar[1]=1;
	
	ar[2]=2;
	
	ar[3]=4;
	ar[4]=8;
	
	ar[5]=16;
	ar[6]=32;
 	for(i=6;i<=n;i++)
	{
		//cout<<"hi";
		ar[i]=(ar[i-1]+ar[i-2]+ar[i-3]+ar[i-4]+ar[i-5]+ar[i-6])%mod;
	}
    return ar[n];
    // your code here
    
}

