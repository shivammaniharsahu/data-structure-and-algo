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

int identical(Bstnode *r1,Bstnode *r2)
{
	if(r1==NULL&&r2==NULL)
	{
		return 1;
	}
	if(r1!=NULL&&r2!=NULL)
	{
				
			if(r1->data==r2->data&&identical(r1->left,r2->left)&&identical(r1->right,r2->right))
			{
				return 1;
			}		
	}
	return 0;
}
int subtree(Bstnode *m,Bstnode *s)
{
	if(s==NULL)
		return 1;
	if(m==NULL)
		return 0;
	if(identical(m,s))
		return 1;
	return (subtree(m->left,s)||subtree(m->right,s));
}
int main()
{
	Bstnode *root1=NULL,*root2=NULL;
	int n,a,i,diameter;
	cout<<"Enter no. of nodes of 1 tree  = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root1=Insert(root1,a);
	}
	cout<<"Enter no. of nodes of 2 tree = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root2=Insert(root2,a);
	}
	int t=subtree(root1,root2);
	if(t)
	{
		cout<<"2 tree is subtree of 1"<<endl;
	}
	else
	{
		cout<<"2 tree is not subtree of 1"<<endl;
	}
}

