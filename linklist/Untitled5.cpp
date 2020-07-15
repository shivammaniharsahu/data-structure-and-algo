#include <iostream>
using namespace std;
const long int s=1000000007;//for taking modulo given question
int main()
{
   int t;
   cin>>t;
   long long int n,i,j,k,temp,m,p,r;
    long  int arr[1000000];
    long int pro[1000000];
   while(t--)
   {
      
      
       p=0;
       cin>>n;
       for(i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       //sorting array in descending order
       for(k=0;k<n;k++)
	{		
		for(j=k+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp  =arr[k];
				arr[k]=arr[j];
				arr[j]=temp;
			}
		}
	}
	//calculation of profit by finally putting depreciated values.
	for(m=0;m<n;m++)
	{
	    if(arr[m]-m>0)
	    {
	 		 pro[p]=arr[m]-m;
	 		 break;
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
	}
	
	cout<<sum%s<<endl;
	
       
       
   }

    return 0;
}
