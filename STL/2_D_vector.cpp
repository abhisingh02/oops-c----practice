#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,key;
    cin>>m>>n;
    vector <vector <int> > vrr;
    for(int i=0;i<m;i++)
    {
        vector <int> temp;
        for(int j=0;j<n;j++)
        {
            cin>>key;
            temp.push_back(key);
        }
        vrr.push_back(temp);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<vrr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}