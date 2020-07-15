#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
};
void DFS(node *root)
{
	node *p=root;
	if(p)
	{
		cout<<p->data;
		if(p->left)
		{
			DFS(p->left);
			
		}
		if(p->right)
		{
			DFS(p->right);
		}
	}
}
int main()
{
	int n,i;
	node *root,*p,*q;
	cin>>n;for(i=0;i<n;i++)
	{
		p = (struct node*)malloc(sizeof(struct node));
		scanf("%d",&p->data);
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
	cout<<"DFS transversal = \n";
	DFS(root);
}
