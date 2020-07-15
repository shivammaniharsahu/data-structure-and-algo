#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *reverse(node *head)
{
	
	node *p,*q;
	if(head==NULL)
	{
		return head;
	}
	p=head;
	q=p->next;
	if(q==NULL)
	{
		return p;
	}
	q=reverse(q);
	p->next->next=p;
	p->next=NULL;
	return q;	
//	node *p,*q;
//	if(head==NULL)
//	{
//		return head;	
//	}
//	p=head;
//	q=p->next;
//	if(q==NULL)
//	{
//		return p;
//	}
//
//	q=reverse(q);
//	p->next->next=p;
//	p->next=NULL;
//	
//	return q;
}
int main()
{
	node *p,*q,*head,*head1;
	int n,i,a;
	cin>>n;
	if(n>0)
	{
		cin>>a;
		p=new node();
		p->data=a;
		p->next=NULL;
		head=p;
	}
			
		for(i=1;i<n;i++)
		{
			cin>>a;
			q=new node;
			q->data=a;	
			q->next=NULL;
			p->next=q;
			p=p->next;
		}
		head1=reverse(head);
		cout<<"Your linklist in reverse order \n";
		while(head1!=NULL)
		{
			cout<<head1->data<<"->";
			head1=head1->next;
		}
	
}
