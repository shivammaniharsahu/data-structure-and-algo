#include <bits/stdc++.h>
using namespace std;
   int main()
   {   int t,n;
       cin>>t;
       while(t--)
       {
           int largest=0,second,ans=0;
           cin>>n;
           int a[n];
           for(int i=0;i<n;i++) 
		   cin>>a[i];
           while(second!=0)
           {    largest=0;
                second=0;
                sort(a,a+n);
               for(int i=0;i<n;i++)
           {
               if(a[i]>largest)
               {
                   second=largest;
                   largest=a[i];
               }
           }
               for(int i=0;i<n;i++)
               {
                if(a[i]>second)
                {
                    a[i]=second;
                }
               }
               ans++;
           }
           cout<<ans<<endl;
       }
   }
