#include<bits/stdc++.h>
using namespace std;

int main()
{
    list <int> l1,l2;
    int n,key;
    cin>>n;
    l2.push_back(1);
    l2.push_back(3);
    l2.push_back(5);
    l2.push_back(7);
    for(int i=0;i<n;i++)
    {
        cin>>key;
        l1.push_back(key);
    }
    cout<<"L1 = ";
    for(auto it = l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"L2 = ";
    for(auto it = l2.begin(); it!=l2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    l1.merge(l2);
    cout<<"now list = ";
    for(auto it = l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
}