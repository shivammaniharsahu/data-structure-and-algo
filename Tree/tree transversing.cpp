#include<bits/stdc++.h>
using namespace std;

class node 
{
	public:
	int data;
	node *right;
	node *left;
		
};


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
				if(p->data > q->data)
				{
					if(q->right == NULL)
					{					
							q->right = p;
							break;
					}
					else
						q = q->right;
				}
				else
				{
					if(q->left == NULL)
						{						
						q->left = p;
						break;
						}
					else
						q = q->left;										
				}				
			}
			
		}
		
	}

inorder(root);

return 0;
}
