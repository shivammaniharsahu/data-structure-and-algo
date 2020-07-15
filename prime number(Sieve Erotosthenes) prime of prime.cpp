#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
const lli max1=1000001;
lli ar[1000001]={1};
lli p[1000001];
void seive()
{
	lli i,j,c=0;
	 ar[0]=0;ar[1]=0;
	 for(i=0;i<=max1;i++)
	 {
	 	if(ar[i]==1)
	 	{
	 		for(j=i*i;j<=max1;j+=i)
	 		{
	 			ar[j]=0;
			 }
		 }
	 }
	 for(i=0;i<=30;i++)
	 {
	 	cout<<ar[i]<<" ";
	 }
	 for(i=0;i<=max1;i++)
	 {
	 	if(ar[i]==1)
	 	c++;
	 	if(ar[c]==1)
	 	p[i]=1;
	 	else
	 	p[i]=0;
	 }
}
int main()
{
	seive();
	int t;
	cin>>t;
	while(t--)
	{
		lli l,r,i;
		cin>>l>>r;
		lli c=0;
		for(;l<=r;l++)
		{
			c+=p[l];
		}
		cout<<c<<endl;;
	}
}
