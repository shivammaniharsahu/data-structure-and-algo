#include <bits/stdc++.h> 
using namespace std; 
 // to 'sum' present in A[]. Also, prints the triplet  
int find3Numbers(int A[], int arr_size, int sum)  
{  
    int l, r;  
  	int c=0;
    // Fix the first element as A[i]  
    for (int i = 0; i < arr_size - 2; i++) 
    {  
  
        // Fix the second element as A[j]  
        for (int j = i + 1; j < arr_size - 1; j++) 
        {  
  
            // Now look for the third number  
            for (int k = j + 1; k < arr_size; k++) 
            {  
                if (A[i] + A[j] + A[k] == sum) 
                {  
				c++;  
                }  
            }  
        }  
        return c;
    }  
  
    // If we reach here, then no triplet was found  
    return c;  
}  
  
/* Driver program to test above function */
int main() 
{ 

    int n,i; 
    cin>>n;
     int ar[n],k;
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	cin>>k;
    int s=find3Numbers(ar, n, k); 
  	cout<<s;
    return 0; 
} 
