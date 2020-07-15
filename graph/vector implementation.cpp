#include <bits/stdc++.h> 
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(6);
    cout<<v[0]<<"\n";
    cout<<v[2]<<"\n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
    }
    for(auto x:v)
    {
        cout<<x<<"\n";
    }
        v.push_back(10);
        cout<<v.back()<<"\n";
        v.pop_back();
        cout<<v.back()<<"\n";
            for(auto x:v)
    {
    cout<<x<<"\n";
    }
    vector<int> s(2);
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<"\n";
    }
} 
