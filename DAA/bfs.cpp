#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector <int> bfsofGraph(int v,vector <int> adj[])
    {
        vector <int> bfs;
        vector <int> vis(v,0);
        queue <int> q;
        q.push(0);
        vis[0]=1;

        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            bfs.push_back(node);

            for(auto it : adj[node])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=1;  
                }
            }
        }
        return bfs;
    }
};


void display(vector <int> &a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    Solution obj;
    vector <int> a = obj.bfsofGraph(n+1,adj);

    display(a);
    cout<<endl;

    return 0;
}