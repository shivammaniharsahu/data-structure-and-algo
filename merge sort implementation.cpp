#include<iostream>
using namespace std;
void merge_sort(int ar[],int,int);
void merge(int ar[],int,int,int);
int main()
{
	int i,n,p=0,r;
	cout<<"Enter number of array you want = ";
	cin>>n;
	int ar[n],br[n];
	r=n-1;
	cout<<"Enter array element \n";
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	merge_sort(ar,p,r);
	
}
 void merge_sort (int A[ ] , int start , int end )
   {
           if( start < end ) {
           int mid = (start + end ) / 2 ;           // defines the current array in 2 parts .
           merge_sort (A, start , mid ) ;                 // sort the 1st part of array .
           merge_sort (A,mid+1 , end ) ;              // sort the 2nd part of array.

         // merge the both parts by comparing elements of both the parts.
          merge(A,start , mid , end );   
   }                    
}

 void merge(int A[ ] , int start, int mid, int end) {
 //stores the starting position of both parts in temporary variables.
int p = start ,q = mid+1;

int Arr[end-start+1] , k=0;

for(int i = start ;i <= end ;i++) {
    if(p > mid)      //checks if first part comes to an end or not .
       Arr[ k++ ] = A[ q++] ;

   else if ( q > end)   //checks if second part comes to an end or not
       Arr[ k++ ] = A[ p++ ];

   else if( A[ p ] < A[ q ])     //checks which part has smaller element.
      Arr[ k++ ] = A[ p++ ];

   else
      Arr[ k++ ] = A[ q++];
 }
  for (int p=0 ; p< k ;p ++) {
   /* Now the real array has elements in sorted manner including both 
        parts.*/
     A[ start ] = Arr[ p ] ;
	 cout<<A[start]<<" ";
	  start++;                          
  }
  cout<<"\n";
}
