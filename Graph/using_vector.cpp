#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    /*
    if edge width is given
    vector <pair <int, int> > adj[n+1];
    */
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);//if directed graph only this use
        adj[v].push_back(u);
        /*
        for edge length if given
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
        */
    }
    return 0;
}