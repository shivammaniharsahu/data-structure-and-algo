
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};

void reversePrint(node* head) {
    if(head==NULL)
    {
        return;
    }
    reversePrint(head->next);
    cout<<head->data<<"\n";
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
		reversePrint(head);
		
	
}

















