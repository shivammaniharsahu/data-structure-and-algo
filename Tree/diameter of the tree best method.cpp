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
int height(Bstnode* root, int& ans) 
{ 
    if (root == NULL) 
        return 0; 
  
    int left_height = height(root->left, ans); 
  
    int right_height = height(root->right, ans); 
  
    ans = max(ans, 1 + left_height + right_height); 
  
    return 1 + max(left_height, right_height); 
} 
  
int diameter(Bstnode* root) 
{ 
    if (root == NULL) 
        return 0; 
    int ans = INT_MIN;  
    cout<<"he = "<<ans<<"\n";
    int height_of_tree = height(root, ans); 
    return ans; 

} 
int main()
{
	Bstnode *root=NULL;
	int n,a,i,dia;
	cout<<"Enter no. of nodes you want = ";
	cin>>n;
	cout<<"Enter the value of all the nodes = \n";
	for(i=0;i<n;i++)
	{
		cin>>a;
		root=Insert(root,a);
	}
	dia=diameter(root);
	if(dia)
	{
		cout<<"Diameter of the tree = "<<dia<<endl;
	}
	else
	{
		cout<<"Diameter of the tree = 0"<<endl;
	}	
}

