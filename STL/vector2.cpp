#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vrr;
    int key,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        vrr.push_back(key);
    }
    for(int i=0;i<vrr.size();i++)
    {
        cout<<vrr[i]<<" ";
    }
    cout<<endl;
    cout<<vrr.front()<<" "<<vrr.back()<<endl;
    cout<<endl;
}