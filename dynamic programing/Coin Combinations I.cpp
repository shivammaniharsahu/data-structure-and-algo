#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
  ll mod = 1e9+7;
  ll n, target;
  cin >> n >> target;
  vector<ll> c;
 ll a;
 for(ll i=0;i<n;i++)
 {
 	cin>>a;
 	c.push_back(a);
 }
  vector<vector<ll> > dp(target+1);
  for(int i=0;i<target+1;i++)
	{
			
		for(int j=0;j<n+1;j++)
		dp[i][j]=0;	
	}
  dp[0][0]= 1;
  for (ll i = 0; i <= target; i++) 
  {
    for (ll j = 0; j <= n; j++) {
    if(j>=c[i])
    {
    	dp[i][j]=dp[i-1][j]+dp[i][j-c[i]];
	}
	else
	{
    	dp[i][j]=dp[i-1][j];
	}
//	
//	  if (i-c[j] >= 0) {
//	(dp[i] += dp[i-c[j]]) %= mod;
//      }
//    }
  }
  cout << dp[target-1][n-1] << endl;


}


return 0;
}

