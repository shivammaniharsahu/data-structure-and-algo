void Delete(int n)
{
	struct Node* temp1=head;
	int i;
	if(n==1)
	{
		head=temp1->next;
		free(temp1);
	}
	for(i=0;i<n-2;i++)
		temp1=temp->next;
		struct Node* temp2=temp1->next;
		temp1->next=temp2->next;
		free(temp2); 
}
