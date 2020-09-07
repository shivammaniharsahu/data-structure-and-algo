#include <bits/stdc++.h>
using namespace std;
int n,a[105],ans[105][105];

int dp(int i,int j)
{
    if(i==j)
    return 0;
    
    if(ans[i][j]==-1)
    {
        int mn = INT_MAX;
        for(int k=i;k<j;k++)
        mn = min(mn,dp(i,k)+dp(k+1,j)+(a[i-1]*a[k]*a[j]));
        
        ans[i][j] = mn;
    }
    return ans[i][j];
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        cin>>a[i];
        
        memset(ans,-1,sizeof(ans));
        cout<<dp(1,n-1)<<endl;
    }
	//code
	return 0;
}
