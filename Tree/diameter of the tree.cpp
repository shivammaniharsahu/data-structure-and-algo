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
	rightheight=findheight(root->right);	
	int t1;
	t1=max(leftheight,rightheight)+1;
	return t1;
		
}
int finddiameter(Bstnode *d)
{
	if(d==NULL)
	{
		return 0;
	}
	int t1,t2,t3;
	int lheight,rheight,ldiameter,rdiameter;
	lheight=findheight(d->left);
	rheight=findheight(d->right);
	cout<<"lh = "<<lheight<<endl;
	cout<<"rh = "<<rheight<<endl;
	
	t1=lheight+rheight+1+2;
	ldiameter=finddiameter(d->left);
	rdiameter=finddiameter(d->right);
	cout<<"t1 = "<<t1<<endl;
	t2=max(ldiameter,rdiameter);	
	cout<<"t2 = "<<t2<<endl;
	t3=max(t1,t2);
	return t3;
}


int main()
{
	Bstnode *root=NULL;
	int n,a,i,diameter;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	diameter=finddiameter(root);
	if(diameter)
	{
		cout<<"Diameter of the tree = "<<diameter<<endl;
	}
	else
	{
		cout<<"Diameter of the tree = 0"<<endl;
	}

	
}

