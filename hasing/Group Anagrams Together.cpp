#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i;
        vector<string> ss;
        string s[n];
        for(int i=0;i<n;i++){
        cin>>s[i];
        sort(s[i].begin(),s[i].end());
        ss.push_back(s[i]);
        }
        sort(ss.begin(),ss.end());
    
		int arr[n];
       	
       	int c=1,k=0;
        for(i=0;i<n-1;i++)
		{
        	
		   if(ss[i]==ss[i+1])
		   {
			   	cout<<ss[i];
		   		c++; 		
		   }
		   	else
		   	{
		   		
		   cout<<c<<endl;
		   arr[k++]=c;
		   c=1;
			}
		   
		   
       }
       arr[k++]=c;
        for(i=0;i<k;i++)
        {
        	cout<<arr[i]<<" ";
		}
        cout<<endl;
        ss.clear();
        //v.clear();
    }
	//code
	return 0;
}
