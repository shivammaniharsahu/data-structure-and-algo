#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *next;
};
void searching(node *head,int item)
{
	node *ptr;
	int f=0;
	ptr=head;
	while(ptr->next!=NULL)
	{
		
		if(ptr->data==item)
		{
			f=1;
			cout<<"Element found  ";
			break;
		}
		ptr=ptr->next;
	}
	if(f==0)
	 cout<<"Element not found";
}
node *sorting(node *head,int item)
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
	node *start=head;
//	cout<<"your sorted Linklist \n"<<endl;
//	while(start!=NULL)
//	{
//		cout<<start->data<<"->";
//		start=start->next;
//	}
//	cout<<p->data;
	searching(head,item);
	return 0;
}
int main()
{
	node *p,*q,*head;
	int n,a,i,item;
	cout<<"Enter no. of nodes = ";
	cin>>n;
	
	cout<<"Enter element to be searched = ";
	cin>>item;
	cout<<"Enter the element of the node = ";
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
	sorting(head,item);

}
