#include<bits/stdc++.h>
using namespace std;
struct Bstnode{
	int data;
	Bstnode *left;
	Bstnode *right;
};
int level=0;
Bstnode *GetNewNode(int data)
{
	Bstnode *newnode=new Bstnode();
	newnode->data=data;
	
	newnode->left=newnode->right=NULL;
	return newnode;
	
}
Bstnode *Insert(Bstnode *root,int data)
{
	if(root==NULL)
	{
		root=GetNewNode(data);
		
	}
	else if(data<=root->data)
	{
		root->left=Insert(root->left,data);
	}
	else
	{
		root->right=Insert(root->right,data);
	}
	return root;
}
int  transverse(Bstnode *root,int val)
{
	if(root!=NULL)
	{
		if(root->data==val)
		 return 1;
		 
		 if(transverse(root->left,val)||transverse(root->right,val))
		 {
		 	level++;
		 	return 1;
		 }
	}
	return 0;
	
}
int main()
{
	Bstnode *root=NULL;
	int n,a,i;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	int val;
	cout<<"Enter whose level is to be find = ";
	cin>>val;
	int res=transverse(root,val);
	cout<<level<<" ";
	
}
