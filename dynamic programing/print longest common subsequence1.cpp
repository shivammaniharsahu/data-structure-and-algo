#include<bits/stdc++.h>
using namespace std; 
void lcs( int *X, int *Y, int m, int n ) 
{ 
	int L[m+1][n+1]; 
	
	for (int i=0; i<=m; i++) 
	{ 
		for (int j=0; j<=n; j++) 
		{ 
		if (i == 0 || j == 0) 
			L[i][j] = 0; 
		else if (X[i-1] == Y[j-1]) 
			L[i][j] = L[i-1][j-1] + 1; 
		else
			L[i][j] = max(L[i-1][j], L[i][j-1]); 
		} 
	} 
	
	int index = L[m][n],ind; 
	ind=index;
	int lcs[index+1]; 
	int i = m, j = n; 
	while (i > 0 && j > 0) 
	{ 
		if (X[i-1] == Y[j-1]) 
		{ 
			lcs[index-1] = X[i-1]; 
			i--; j--; index--;	 
		} 
	
		else if (L[i-1][j] > L[i][j-1]) 
			i--; 
		else
			j--; 
	} 
	
	
	for(i=0;i<ind;i++)
	{
		cout<<lcs[i]<<" ";
	} 
} 

int main() 
{ 

	int n,m;
	cin>>n>>m;
	int ar[n],br[m];
	int i,j;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(j=0;j<m;j++)
	{
		cin>>br[j];
	}
	lcs(ar, br, n,m); 
	return 0; 
} 

