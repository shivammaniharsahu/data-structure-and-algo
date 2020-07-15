#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *merge(node *p , node *q , node *sorting)
{
	node *head3;
	
	if(p == NULL)
		return q;
	if(q == NULL)
		return p;
	
	if(p && q)
	{
		if(p->data <= q->data)
		{
			sorting = p;
			p = sorting->next;
		}
		else
		{
			sorting = q;
			q = sorting->next;
		}
		
	}
	
	head3 = sorting;
	
	while(p && q)
	{
		if(p->data <= q->data)
		{
			sorting->next = p;
			sorting = p;
			p = sorting->next;
		}
		else
		{
			sorting->next = q;
			sorting = q;
			q = sorting->next;
		}
	}
	
	if(p==NULL)
	{
		sorting->next = q;
	}
	
	if(q==NULL)
	{
		sorting->next = p;
	}
	
	return head3;	
}
int main()
{
	node *p,*q,*head1=NULL,*head2=NULL,*sorting;
	int n,n1,n2,a,i;
	
	cout<<"Enter length of 1 linklist = ";
	
	cin>>n1;
	if(n1>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head1=p;
	}
	for(i=1;i<n1;i++)
	{
		
		cin>>a;
		q=new node();
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	
	cout<<"Enter length of 2 linklist = ";
	
		cin>>n2;
	if(n2>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head2=p;
	}
	for(i=1;i<n2;i++)
	{
		
		cin>>a;
		q=new node();
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	p=head1;
	q=head2;
	cout<<"\n1 linklist \n";
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->next;
	}
	
	cout<<"\n2 linklist \n";
	while(q!=NULL)
	{
		cout<<q->data<<"->";
		q=q->next;
	}
	
	printf("\n Sorted Merged Linked List =>");
sorting=	merge(p,q,sorting);
	
	while(sorting!=NULL)
	{
		
		cout<<sorting->data<<"->";
		sorting=sorting->next;
		
	}
	return 0;
	
}
