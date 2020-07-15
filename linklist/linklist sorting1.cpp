#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
node *sorting(node *head)
{
	node *t1,*t2;
	int temp;
	for(t1=head;t1->next!=NULL;t1=t1->next)
	{
			for(t2=head;t2->next!=NULL;t2=t2->next)
			{
				if(t2->data>t2->next->data)
				{
					temp=t2->data;
					t2->data=t2->next->data;
					t2->next->data=temp;
				}	
			}	
	}
										//	for(i=0;i<n;i++)
										//	{
										//		j=i;
										//		while(ar[j]>ar[j+1]&&j>=0)
										//		{
										//			t=ar[j];
										//			ar[j]=ar[j+1]
										//			ar[j+1]=t;
										//			j--;
										//		}
										//	}
	node *start=head;
	cout<<"your sorted Linklist \n"<<endl;
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
	sorting(head);

}
