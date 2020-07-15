// C++ code to rotate bits 
// of number 
#include<iostream> 

using namespace std; 
#define INT_BITS 16
class gfg 
{ 
	
/*Function to left rotate n by d bits*/
public: 
int leftRotate(int n, unsigned int d) 
{ 
	
	/* In n<<d, last d bits are 0. To 
	put first 3 bits of n at 
	last, do bitwise or of n<<d 
	with n >>(INT_BITS - d) */
	int m=(n << d)|(n >> (INT_BITS - d));
	cout<<INT_BITS<<endl;
	return (n << d)|(n >> (INT_BITS - d)); 
} 

/*Function to right rotate n by d bits*/
int rightRotate(int n, unsigned int d) 
{ 
	/* In n>>d, first d bits are 0. 
	To put last 3 bits of at 
	first, do bitwise or of n>>d 
	with n <<(INT_BITS - d) */
	return (n >> d)|(n << (INT_BITS - d)); 
} 
}; 

/* Driver code*/
int main() 
{ 
	gfg g; 
	int n = 7881; 
	int d = 5; 
//	std::string bit_string = "110010"; 
  //std::bitset<16> b1(bit_string);    
	cout << "Left Rotation of " << n << 
			" by " << d << " is "; 
	cout << g.leftRotate(n, d); 
	cout << "\nRight Rotation of " << n << 
			" by " << d << " is "; 
	cout << g.rightRotate(n, d); 
	getchar(); 
} 

// This code is contributed by SoM15242 

