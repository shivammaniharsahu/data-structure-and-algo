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

int findheight(Bstnode *root)
{
	int leftheight,rightheight;
	Bstnode *height=root;
	if(root==NULL)
	{
		return -1;	
	}
	leftheight=findheight(root->left);
	cout<<endl;
	cout<<"l="<<leftheight;
	rightheight=findheight(root->right);
		cout<<endl;
		cout<<"r="<<rightheight;	
	return max(leftheight,rightheight)+1;
		
}


int main()
{
	Bstnode *root=NULL;
	int n,a,i,height;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	height=findheight(root);
	if(height)
	{
		cout<<"Height of the tree = "<<height<<endl;
	}
	else
	{
		cout<<"Height of the tree = 0"<<endl;
	}

	
}

