#include<iostream>
using namespace std;
class rahul{
	public: int k;
	rahul(int z)
	{
		k=z;
		
	}
};
class bol:virtual public rahul{
	public: int t;
	
	bol virtual rahul(int j){
		t=j;
		
	}
};

class aaj:virtual public rahul{
	public: int y;
	aaj virtual rahul (int i)
	{
		y=i;
		
	}
};
class tel:public bol{
	int f;
	tel (int b,int c, int d):rahul(a),aaj(c),bol(b)
	{
		f=d;
	}
	void pol(){
		cout<<k<<t<<y<<f;
	}
};
int main()
{
	tel c(1,2,3,4);
	c.pol();
	return 0;
}


