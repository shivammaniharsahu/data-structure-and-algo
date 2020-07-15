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

bool check_mirror(Bstnode *r1,Bstnode *r2)
{
	if(r1==NULL&&r2==NULL)
	{
		return true;	
	}
	if(r1==NULL||r2==NULL)
	 return false;
	if(r1->data==r2->data)
	{
		cout<<"hey";
		if(check_mirror(r1->left,r2->right)&&check_mirror(r1->right,r2->left))
		{
			return true;
		}
	}
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
	bool t=check_mirror(root1,root2);
	if(t)
	{
		cout<<"Tree are mirror of eact other"<<endl;
	}
	else
	{
		cout<<"Tree are not mirror of eact other"<<endl;
	}
}

