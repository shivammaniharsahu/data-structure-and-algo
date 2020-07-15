#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *dublicate(node *head)
{
	node *p=head;
	node *q;
	while(p!=NULL&&p->next!=NULL)
	{
		if(p->data==p->next->data)
		{
				
			q=p->next->next;
			if(q==NULL)
			{
				p->next=NULL;
				break;
			}
			p->next=q;
		}
		
			if(p->data!=p->next->data)
			{
				p=p->next;
			}	
	}
	node *start=head;
	cout<<endl;
	while(start!=NULL)
	{
		cout<<start->data<<"->";
		start=start->next;
	}
//	cout<<p->data;
	return 0;
}
int main()
{
	node *p,*q,*head;
	int n,a,i;
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
		q=new node();
		q->data=a;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
//	node *start=head;
//	while(start!=NULL)
//	{
//		cout<<start->data<<"->";
//		start=start->next;
//	}
	dublicate(head);

}
