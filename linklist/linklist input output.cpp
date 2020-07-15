// A simple C++ program for traversal of a linked list 
#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

// This function prints contents of linked list 
// starting from the given node 
void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	} 
} 

// Driver code 
int main() 
{ 
	int i,n,a;
	cout<<"Enter number of node you want";
	cin>>n;
	Node* head = NULL;
	
	Node* head1 = NULL; 
		head = new Node(); 

	if(n > 0)
	{
	printf("Enter the first Linked List");
	scanf("%d",&a);
	head = new Node();
	head->data = a;
	head->next = NULL;
	head1 = head;
	}






	for(i=1;i<n;i++)
	{
	cin>>a;
	head->data=a;
	head->next=NULL;
	}
	
	for(i=0;i<n;i++)
	{
	cout<<head->data<<" ";
	head->next=NULL;
	}
	//	head =head1;
		//printList(head); 

	return 0; 
} 

// This is code is contributed by rathbhupendra 

