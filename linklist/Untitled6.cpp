#include <bits/stdc++.h>
using namespace std;
const long int s=1000000007;//for taking modulo given question
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      
				      			
				   long long int n,i,j,k,temp,m,p,r;
					
				       cin>>n;
				       long long int arr[n];//n since always the size of arr will equal to n
				    	long long int pro[n]={0};
				       
					   for(i=0;i<n;i++)
				       {
				           cin>>arr[i];
				       }
				       //use sort(ar,ar+n,greater<>()); in decreasing order
				        sort(arr,arr+n,greater<int>());
					//calculation of profit by finally putting depreciated values.
					
				       p=0;
					for(m=0;m<n;m++)
					{
					    if(arr[m]-m>0)
					    {
						  pro[p]=arr[m]-m;
						 
					    }
					    else 
					    {
					        pro[p]=0;
					    }
						  p++;
					}
					//summation of elements to find profit.
					long long int sum=0;
					for(r=0;r<p;r++)
					{
					    sum=sum+pro[r];
					    cout<<pro[r];
					    
					}
					cout<<sum;
					cout<<sum%s<<endl;//here is th need of modulo
   			}
		return 0;
}
