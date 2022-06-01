#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> vrr(n);
    for(int i=0;i<n;i++)
    {
        cin>>vrr[i];
    }
    /*
    for(int i=0;i<n;i++)
    {
        cout<<vrr[i]<<" ";
    }
    */
    cout<<endl;
    //check if empty
    if(vrr.empty())
    {
        cout<<"vrr is empty\n";
    }
    else{
        cout<<"vrr is not empty\n";
    }
    cout<<endl;
    //iterative function
    for(auto it = vrr.begin(); it != vrr.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}