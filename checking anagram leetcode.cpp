#include <bits/stdc++.h>
#define ll unsigned long long  
using namespace std;


bool check(int arr[26],int arr1[26])
{
	int f=0,c=0,i;
		for(i=0;i<26;i++)
		{
	 	 				 if(arr[i]==arr1[i])	
							c++;
		 	 else
		 	 {
		 	f=1;
		 	break;
			}
		}
	if(f==0)
	return true;
	else
	return false;
 } 
int main() {
	
	    vector<int> v1;
	    string s,p;
	    int l1,l2,i,j;
	    int arr[26]={0},arr1[26]={0};
	    cin>>s>>p;
	    l1=s.length();
	    l2=p.length();
	    for(int i=0;i<p.length();i++)
		{
	 		 arr1[p[i]-'a']=arr1[p[i]-'a']+1;
		}
		for(int i=0;i<p.length();i++)
		{
	 		 arr[s[i]-'a']=arr1[p[i]-'a']+1;
		}
		for(int i=0;i<26;i++)
		{
	 		 cout<<arr1[i]<<" ";
		}
		cout<<endl;
		int c=l2;
	
		int k=0,l=0;
		for(i=l2;i<l1;i++)
		{
			arr[s[i-l2]-'a']--;
			arr[s[i]-'a']++;
			bool r=check(arr,arr1);
			if(r)
			v1.push_back(i-l2+1);
		}
		for(i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
		return 0;
}
