#include <iostream>
using namespace std;

class qu
{
    char *cot;
    int front;
    int rear;
    int size=4;
public:
    qu()
    {
        cot=new char[10];
        front=0;
        rear=0;
    }
    void enque(char);
    void deque();
    int ise();
    int isf();
    void dis();
};
qu r;
void qu::enque(char x)
{
    if((rear+1)%size==front)
        cout<<"qu is full";
    else
    {rear=(rear+1)%size;
        cot[rear]=x;
    }
}
void qu::deque()
{   char x;
   if(ise())
    cout<<"qu is empty";
   else
   {front=(front+1)%size;
       x=cot[front];
   }
   cout<<x;
}
int qu::ise()
{
    if(front==rear)
        return 1;
    else
    return 0;
}
int qu::isf()
{
    if(rear==size-1)
        return 1;
    else
    return 0;
}

void qu::dis()
{
		int i=front;
        do {
			cout<<cot[i]<<" ";
            i=(i+1)%size;
			}while(i!=(rear+1)%size);
}
int main()
{
	
  cout<<"hey\n";
  r.enque('a');
  r.deque();
   cout<<"hey1\n";
  r.enque('b');
  
   cout<<"hey2\n";
  r.dis();
   return 0;
};
