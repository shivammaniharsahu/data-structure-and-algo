#include<bits/stdc++.h>
using namespace std;
class node {
	public:
	int a;
	node *left;
	node *right;
};
node *q[100];
int front=-1;
int rear=0;
void enqueue(node *root)
{
	q[rear]=root;
	rear++;
}

node *dequeue()
{
	front++;
	node *c=q[front];
	return c;
}
void levelorder(node *root)
{
	node *p;
	printf("\n");
	enqueue(root);
	while(rear-1!=front)
	{
		p=dequeue();
		cout<<p->a<<" ";
		if(p->left)
			enqueue(p->left);
		if(p->right)
			enqueue(p->right);
	}
}

int main()
{
	int n;
	int i;
	node *root,*p,*q;
	cout<<"enter number of nodes= ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i==0)
		{
			p=new node();
			cin>>p->a;
			p->left=NULL;
			p->right=NULL;
			q=p;
			root=p;
		}
		else
		{
			p=new node();
			cin>>p->a;
			p->left=NULL;
			p->right=NULL;
			q=root;
			while(1)
			{
				if(p->a>q->a)
				{
					if(q->right==NULL)
					{
						q->right=p;
						break;
					}
					else
					{
						q=q->right;
					}
				}
				else
				{
					if(q->left==NULL)
					{
						q->left=p;
						break;
					}
					else
					{
						q=q->left;
					}
				}
			}
			
		}
	}
	
	cout<<"level order transversal is :- \n";
	levelorder(root);
	return 0;
}


