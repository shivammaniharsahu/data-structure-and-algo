#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k,a;
    bool f=true;
    cin>>t;
    vector<vector<int>> vp;
    while(t--)
	{
        f=true;
        vp.clear();
        cin>>n>>k;
        int ar[n+1],ar1[n+1];
        for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
			ar1[ar[i]]=i;
		}
        for(int i=1;i<=n;i++)
		{
            if(i!=ar[i])
			{ 
                if(ar[i]!=ar1[i])
				{ 
                	int a=ar[i];
                    int b=ar[ar1[i]];
                    int c=ar[a];
                    ar[i]=b;
                    ar[a]=a;
                    ar[ar1[i]]=c;
                    vector<int> v;
                    v.push_back(ar1[i]);
                    v.push_back(i);
                    v.push_back(a);
                    vp.push_back(v);
                    int tmp=ar1[i];
                    ar1[i]=i;
                    ar1[a]=a;
                    ar1[c]=tmp;
                    k--;
                    if(k==0)break;
                }
				else continue;
                
            }
            else continue;
        }
        //cout<<vp[0][0]<<" "<<vp[0][1]<<" "<<vp[0][2];
        for(int i=1;i<=n;i++)
		{
        	
            if(i!=ar[i])
			{ 
                if(ar[i]==ar1[i])
				{
                    int j;
                    int a=ar[i];
                    int b=ar[ar1[i]];
                    int c=-1;
                    for(j=1;j<=n;j++)
					{
                        if(ar[j]!=j && ar[j]!=a && ar[j]!=b){
                            c=ar[j];
							break;
                        }
                    }
                    if(c==-1)
					break;
                    else
					{
                    	
                        ar[i]=b;
                        ar[j]=a;
                        ar[a]=c;
                        vector<int>v;
                        v.push_back(a);
                        v.push_back(b);
                        v.push_back(j);
                        vp.push_back(v);
                        ar1[i]=i;
                        ar1[a]=j;
                        ar1[c]=ar1[i];
                        k--;
                        if(k==0)break;
                        

                    }
                }
                else{
                    int a=ar[i];
                    int b=ar[ar1[i]];
                    int c=ar[a];
                    ar[i]=b;
                    ar[a]=a;
                    ar[ar1[i]]=c;
                    vector<int>v;
                    v.push_back(ar1[i]);
                    v.push_back(i);
                    v.push_back(a);
                    vp.push_back(v);
                    int tmp=ar1[i];
                    ar1[i]=i;
                    ar1[a]=a;
                    ar1[c]=tmp;
                    k--;
                    if(k==0)break;
                }
            }
            else continue;
        }
        for(int i=1;i<=n;i++)
			if(ar[i]!=i)
			{
				f=false;
				break;
			}
	    if(f==true)
		{ 
        	int n1=vp.size();
        	cout<<n1<<'\n';
        	for(auto i:vp)
			cout<<i[0]<<" "<<i[1]<<" "<<i[2]<<'\n';
         }
		 else cout<<-1<<'\n';
       
        }
    return 0;
}
