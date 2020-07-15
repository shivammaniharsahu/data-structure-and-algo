#include<bits/stdc++.h>

using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int k;
    for(int i=1;i<=n;i++){
        string s=bitset<8>(i).to_string();
   
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                k=i;
                break;
            }
        }
        while(k<s.length()){
        cout<<s[k];
        k++;
        }
        
        cout<<" ";
    }
    cout<<endl;
   }
}
