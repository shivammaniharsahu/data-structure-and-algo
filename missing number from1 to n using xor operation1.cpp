#include <iostream>
using namespace std;

int get(int arr[],int n){
    int x1=arr[0];
    int x2= 1,i;
    for(i=1;i<n-1;i++)
        x1=x1^arr[i];
    for(i=2;i<=n;i++)
        x2=x2^i;
        return(x1^x2);
}


int main(){
     int t,i,j;
     cin>>t;
     for(j=1;j<=t;j++){
         int n;
         cin>>n;
         int arr[n];
         for(i=0;i<n-1;i++){
             cin>>arr[i];
         }
    int m=get(arr,n);
    cout<< m<<endl;

     }
        return 0;
      
}
