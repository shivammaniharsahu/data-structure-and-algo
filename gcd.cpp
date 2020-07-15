#include <bits/stdc++.h>
using namespace std;

int main() {
int t,i,j;
cin>>t;
int n[t],count[t];
for(i=1;i<=t;i++)
{
    cin>>n[i];
}
for(i=1;i<=t;i++)
{
    count[i]=0;
}
for(i=1;i<=t;i++)
{
    for(j=1;j<=n[i];j++)
    {
        if ( __gcd(j, n[i]) == 1) 
        {
            count[i]++;
        }
    }
}
for(i=1;i<=t;i++)
{
    cout<<count[i]<<endl;
}
return 0;
}
