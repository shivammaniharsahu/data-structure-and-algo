#include <bits/stdc++.h> 
using namespace std; 
  
long long int find3Numbers(long long int  A[],long long int arr_size,long long int sum) 
{ 
	long long int c=0;
    // Fix the first element as A[i] 
    for (long long int i = 0; i < arr_size - 2; i++) { 
  
        // Find pair in subarray A[i+1..n-1] 
        // with sum equal to sum - A[i] 
        unordered_set<long long int> s; 
        long long int curr_sum = sum - A[i]; 
        for (long long int j = i + 1; j < arr_size; j++) { 
            if (s.find(curr_sum - A[j]) != s.end()) { 
                 c++;
            } 
            s.insert(A[j]); 
        } 
        return c;
    } 
  
    // If we reach here, then no triplet was found 
    
} 
  
/* Driver program to test above function */
int main() 
{ 

    long long int n,i; 
    cin>>n;
    long long int ar[n],k;
    for(i=0;i<n;i++)
    {
    	cin>>ar[i];
	}
	cin>>k;
    long long int s=find3Numbers(ar, n, k); 
  	cout<<s;
    return 0; 
} 
