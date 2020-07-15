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
void diagonalsum(node *root)
{
	node *p;
	printf("\n");
	enqueue(root);
	enqueue(NULL);
	int i=0,sum;
	while(rear-1!=front)
	{
		p=dequeue();
		if(p==NULL)
		{
			enqueue(NULL);
			p=dequeue();
			if(p==NULL)
				break;
		}
		sum=0;
		while(p!=NULL)
		{
			sum=sum+p->a;
			if(p->left);
			{
				enqueue(p->left);
			}
			p=p->right; 
		}
		cout<<"diagonal "<<i<<" = "<<sum<<" \n";
		i++;
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
	
	cout<<"diagonal sum are:- \n";
	diagonalsum(root);
	return 0;
}


