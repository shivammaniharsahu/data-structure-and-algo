// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 

// Function to return the lexicographically 
// smallest string of length n that 
// satisfies the given condition 
string lexo_small(int n, int k) 
{ 
	string arr = ""; 

	for(int i = 0; i < n; i++) 
		arr += 'a'; 

	// Iteration from the last position 
	// in the array 
	for (int i = n - 1; i >= 0; i--) 
	{ 
		k -= i; 

		// If k is a positive integer 
		if (k >= 0) 
		{ 

			// 'z' needs to be inserted 
			if (k <= 3) 
			{ 
				arr[i] = 'c'; 
				k -= 3; 
			} 

			// Add the required character 
			else
			{ 
				char c= (char)(k + 97 - 1); 
				arr[i] = c; 
				k -= arr[i] - 'a' + 1; 
			} 
		} 

		else
			break; 

		k += i; 
	} 
	return arr; 
} 

// Driver code 
int main() 
{ 
	int n = 3, k = 9; 

	string arr = lexo_small(n, k); 

	cout << arr; 
} 
 

