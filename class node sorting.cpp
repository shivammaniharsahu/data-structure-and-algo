#include <iostream>
using namespace std;

class node
{
	
	public:
	int data;
	  
	node *next;
	  
	void create (int *, int);
	  
	void create2 (int *, int);
	  
	 
	void display (node *);
	  
//	void reverse ();
	  
	void pep ();

};


node * first, *s = NULL;



void node::create (int a[], int n) 
{
		  first = new node;
		  
		first->data = a[0];
		  
		first->next = NULL;
		  
		node * last = first;
		  
		for (int i = 1; i < n; i++)
		    
		{
				      
				node * t = new node;
				      
				t->data = a[i];
				     // cout<<t->data<<" ";
				t->next = NULL;
				      
				last->next = t;
				      
				last = t;
				
				   //   cout<<"l "<<last->data<<" ";
		
		}
		
			cout<<"\n";
} 
node * second;


void node::create2 (int a[], int n) 
{
		  second = new node;
		  
		second->data = a[0];
		  
		second->next = NULL;
		  
		node * last = second;
		  
			for (int i = 1; i < n; i++)
			    
			{
				      
				node * t = new node;
				      
				t->data = a[i];
				      
				    //  cout<<t->data<<" ";
				t->next = NULL;
				      
				last->next = t;
				      
				last = t;
			
			}
			cout<<"\n";
} 
void node::display (node * r) 
{
		  node *p;
		p = r;
		cout<<"\n";
		while (p)
		    
		{
		     cout << p->data << "  ";
		      
				p = p->next;
		    
		}
};


 
void	node::pep () 
{
			  
			node * p = first, *q = second, *r = NULL;
			if (first->data > second->data)
			 {
			      
					s = second;
					     //cout<<second->data<<" ";
					q = q->next;
					      
					s->next = NULL;
					    
			}
			  
			  else
			{
					      
					s = p;
					      
					      cout<<s->data<<" ";
					p = p->next;
					      
					s->next = NULL;
					    
			 
			}
			  
			while (p && q)
			{
					      
					if (p->data > q->data)
						
					{
						  
						s->next = q;
							  
						r = q->next;
							  
						s = q;
							  
						     cout<<s->data<<" ";
						s->next = NULL;
							  
						q = r;
							
					}
			      
			else if (p->data < q->data)
			{
				  
					//cout<<p->data<<" ";
					s->next = p;
						  
					r = p->next;
						  
					s = p;
						  
						     //cout<<s->data<<" ";
					s->next = NULL;
						  
					p = r;
						
			}
			      
			else
				
			{
				  
				s->next = p;
					  
				p = p->next;
					  
				s->next = q;
					  
				q = q->next;
				
			}
			    
			 
			}
			  
			 
			if (p)
			    
			{
				cout<<"p:"<<p<<"\n";
			//	 s=p;     
				s->next = p;
			
			}
			  
		if (q)
	
			    
		{
			     // s=q;
				//cout<<"q:"<<q->data<<"\n";
				s->next = q;
			    
			 
			}			
}
			

int main () 
{
			int a[4] = { 1, 3, 5, 7 };  
			int p[4] = { 2, 4, 6, 8 };
			  
			node m;
			  
			m.create (a, 4);
			  
			m.create2 (p, 4);
			  
			m.pep ();
			  
			m.display (s);
			  
			return 0;

}
