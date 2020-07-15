#include<iostream>
#include<string.h>
using namespace std;
class stack
{
	private :
		int top;
		int ar[5];
	public :
		stack()
		{
			top=-1;
			for(int i=0;i<5;i++)
			{
				ar[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
				return true;
			else
				return false;
		}
		bool isFull()
		{
			if(top==4)
				return true;
			else
				return false;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Stack overflow";
			}
			else
			{
				top++;
				ar[top]=val;
			}
		}
		int pop()
		{
			if(isEmpty())
			{
				cout<<"Stack underflow";
				return 0;
			}
			else 
			{
				int popvalue=ar[top];
				ar[top]=0;
				top--;
				return popvalue;
			}
		}
		int count()
		{
			return top+1;
		}
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"Stack under flow\n";
				return 0;
			}
			else
			{
				return ar[pos];
			}
		}
		void change(int pos,int val)
		{
			ar[pos]=val;
			cout<<"value changed at location"<<pos<<endl;
		}
		void display()
		{
			
			cout<<"All values in the stack are \n";
			for(int i=4;i>=0;i--)
			{
				cout<<ar[i]<<"\n";
			}
		}
};
int main()
{
	stack s1;
	int option,position,value;
	do
	{
		cout<<"Enter Your choice and 0 for exit\n";
		cout<<"1 : push() \n";
		cout<<"2 : pop() \n";
		cout<<"3 : isempty() \n";
		cout<<"4 : isfull() \n";
		cout<<"5 : count() \n";
		cout<<"6 : peek() \n";
		cout<<"7 : change position() \n";
		cout<<"8 : display() \n";
		cout<<"9 : clear screen() \n";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Enter value to be pushed";
				cin>>value;
				s1.push(value);
				break;
				
			case 2:
				cout<<"Your Poped value is"<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
				{
					cout<<"Stack is Empty";
				}
				else
					cout<<"Stack is not Empty";
				break;
			case 4:
				
				if(s1.isFull())
				{
					cout<<"Stack is Full";
				}
				else
					cout<<"Stack is not Full";
				break;
			case 5:
				cout<<"No. of stack value is "<<s1.count();
				break;
			case 6:
				cout<<"Enter position of item you want to peek\n";
				cin>>position;
				cout<<"Value at positon"<<position<<" is "<<s1.peek(position)<<endl;
				break;
			case 7:
				cout<<"change position of item you want to change";
				cin>>position;
				cout<<"Enter value of item you want to change";
				cin>>value;
				s1.change(position,value);
				break;
			case 8:
				s1.display();
				break;
			case 9:
				exit(0);
				break;
			default :
				cout<<"Enter valid choice\n";
		}
	}while(option!=0);
}
