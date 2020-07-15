#include<bits/stdc++.h>
using namespace std;
struct Bstnode{
	int data;
	Bstnode *left;
	Bstnode *right;
};

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
void delete1(Bstnode *root)
{
	if(root==NULL)
	{
		return;
	}
	delete1(root->left);
	delete1(root->right);
	free(root);
}

int main()
{
	Bstnode *root1=NULL;
	int n,a,i,diameter;
	cout<<"Enter no. of nodes of 1 tree  = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root1=Insert(root1,a);
	}
	delete1(root1);
	cout<<"all nodes deleted";
}

