#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
	int data;
	struct node *next;
}node;

node* middleNode(node *head)
{
		int n=0;
        node* node1=new node();
        node1=head;
        while(head!=NULL)
        {
            n++;
            head=head->next;
        }
        cout<<n<<endl;
        for(int i=0;i<n/2;i++)
        {
        	cout<<"he "<<node1->data<<" ";
            node1=node1->next;
        }
        //head=node1;
        while(node1!=NULL)
        {
        	
        	cout<<"she "<<node1->data<<" ";
            node1=node1->next;
		}
        return head;
    }
int main()
{	
	int a , i , n , cnt , r;
	node *p,*q,*start , *temp , *new_start;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	
	if(n == 0)   //an empty string
	{
		printf("It is a Palindrome");
		return 0;
	}
	printf("Enter all the nodes separated by space \n");
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	start = p; 
	for(i=1;i<n;i++)
	 	{
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
		}
	node *s;
	s=middleNode(start);
//	while(s!=NULL)
//	{
//		cout<<s->data<<" ";
//		s=s->next;
//		
//	}		
return 0;
}
