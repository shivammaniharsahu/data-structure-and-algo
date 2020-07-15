#include<bits/stdc++.h>
using namespace std;

class node 
{
	public:
	int data;
	node *right;
	node *left;
		
};





node* push(int n , node *p)
{
	node *q;
	q = (node*)malloc(sizeof(node));
	q->a = n;
	q->next = p;
	return q;
}

node* pop(node *p)
{	
	node *q;
	int t;
	printf("----------------------");
	printf("popped element = %d \n" , p->a);
	q = p;
	p = p->next;
	free(q);
	return p;
}



void inorder(node *root)
{
	if(root)
	{
		inorder(root->left);
		printf("  %d",root->data);
		inorder(root->right);
	}
}

int main()
{
	int n , i;
	node *p , *q , *root;
	printf("Enter the number of nodes");
	cin>>n;
	for(i=0;i<n;i++)
	{
		p = new node();
		cin>>p->data;
		p->left = NULL;
		p->right = NULL;
		if(i == 0)
		{
			root = p; // root always point to the root node
		}
		else
		{	
			q = root;   // q is used to traverse the tree
			while(1)
			{	
				while(p)
				{
					p=push(p,q);
					p=p->left;	
									
				}			
			}
			
		}
		
	}

inorder(root);

return 0;
}
