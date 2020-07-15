#include<bits/stdc++.h>
using namespace std;
struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
};
int minimum(bstnode *root)
{
	bstnode *min=root;
	if(min==NULL)
	{
		return 0;	
	}
	while(min->left!=NULL)
	{
		min->data=min->left->data;
	}
	return min->data;
		
}
bstnode *getnewnode(int data)
{
	bstnode *root;
	
		root=new bstnode();
		root->data=data;
	
	root->left=NULL;
	
	root->right=NULL;
	return root;
}
bstnode *Insert(bstnode *root,int data)
{
	if(root==NULL)
	{
		root=getnewnode(data);
		
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


int main()
{
	bstnode *root=NULL;
	int i,j,n,min,a;
	cout<<"enter no. of nodes = ";
	cin>>n;
	
	cout<<"enter values of each nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	min=minimum(root);
	if(min)
	{
		cout<<"Minimum value = "<<min;
	}
	else
	{
		cout<<"Empty Node";
	}
	//maximum(root);
	return 0;
	
}
