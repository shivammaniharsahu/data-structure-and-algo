#include<iostream>
#include<algorithm>
#include <cstring> 
#include<stdbool.h>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter Your Number ";
	cin>>n;
	bool pno[n+1];
	memset(pno,true,sizeof(pno));
	for(i=2;i*i<=n;i++)
	{
		if(pno[i]==true)		
		{
			for(j=i*2;j<=n;j+=i)
				pno[j]=false;	
		}			
	}
   for (int i = 2; i<=n ;i++)
	   	if (pno[i])
	   	 	cout << i << " "; 
	return 0;        
}
