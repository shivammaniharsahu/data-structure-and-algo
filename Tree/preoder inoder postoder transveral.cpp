#include<bits/stdc++.h>
using namespace std;
struct bstnode
{
	int data;
	bstnode *left;
	bstnode *right;
};
void preorder(bstnode *root)
{
	if(root==NULL)
	 return;
	cout<<root->data<<" ";
	
	preorder(root->left);
	preorder(root->right);
}

void inorder(bstnode *root)
{
	if(root==NULL)
	 return;
	 
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(bstnode *root)
{
	if(root==NULL)
	 return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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
	cout<<"Predoder Transversal =";
	preorder(root);
	
	cout<<"\nInoder Transversal =";
	inorder(root);
	
	cout<<"\nPost Transversal = ";
	postorder(root);
	return 0;
	
}
