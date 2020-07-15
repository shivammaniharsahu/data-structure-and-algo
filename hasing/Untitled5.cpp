
#include <bits/stdc++.h> 
using namespace std; 
int find3Numbers(int A[], int arr_size, int sum) 
{ 
    int l, r; 
    sort(A, A + arr_size); 
  	int c=0;
    for (int i = 0; i < arr_size - 2; i++) { 
  
        // To find the other two elements, start two index 
        // variables from two corners of the array and move 
        // them toward each other 
        l = i + 1; // index of the first element in the 
        // remaining elements 
  
        r = arr_size - 1; // index of the last element 
        while (l < r) { 
            if (A[i] + A[l] + A[r] == sum) { 
                c++;
            } 
            else if (A[i] + A[l] + A[r] < sum) 
                l++; 
            else // A[i] + A[l] + A[r] > sum 
                r--; 
        }
	return c;  
   
    } 
  
    return c; 
} 
  
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
