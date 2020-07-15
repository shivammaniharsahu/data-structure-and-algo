#include<bits/stdc++.h>
using namespace std;
int main()
{
	int nv,ne;
	int fv,tv;//from vertex and to vertex
	
		cout<<"Enter no. vertices=";
		cin>>nv;
		
		cout<<"Enter no. Edges=";
		cin>>ne;
		
	int mat[nv][ne]={0},i,j;
	for(int i=0;i<ne;i++)
	{
		
		cout<<"edge number = "<<i+1<<"\n";
		cout<<" From = ";
		cin>>fv;
		cout<<" To = ";
		cin>>tv;
		mat[fv][tv]=1;
	}
	
	for(int i=0;i<nv;i++)
	{
		
		for(j=0;j<ne;j++)
		{
				
			cout<<mat[i][j]<<" ";	
		}
		cout<<"\n";
	}
	
}
