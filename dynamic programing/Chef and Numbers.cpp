#include<bits/stdc++.h>
#define ll  int 
using namespace std;

bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
       return a.second>b.second; 
} 

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,i,k,j,res,m=0,c=0,pos,f=0;
		cin>>n;
		set<int> s;
		
		set<int>::iterator  itr;
		ll ar[n];
		
		vector<pair<int,int>> vect;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			s.insert(ar[i]);
		}
		k=0;
		if(s.size()==1)
		{
			cout<<*s.begin();
		}
		else
		{
					
			for(auto itr=s.begin();itr!=s.end();itr++)
			{
				
				c=0;
				for(j=0;j<n;j++)
				{	f=0;
					pos=0;
					if(*itr==ar[j])
					{
						//cout<<ar[j];
						f++;
						if(f==1)
						{
							c++;
							pos=j;
							
						}
						else if(abs(j-pos)>1)
						{
							pos=j;
							c++;		
						}
						//cout<<pos<<endl;
					}
				}
				
					cout<<c<<" ";
					 vect.push_back( make_pair(*itr,c)); 
				cout<<endl;
				k++;
			}
			sort(vect.begin(), vect.end(),sortbysecdesc); 
			cout<<vect[0].first;
			
		}
		cout<<endl;
	}
	return 0;
}
