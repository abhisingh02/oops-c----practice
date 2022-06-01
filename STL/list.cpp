#include<bits/stdc++.h>
using namespace std;

int main()
{
    //list <int> l1 {1,2,3,4,5};

    list <int> l1;
    int n;
    int key;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>key;
        l1.push_back(key);
    }


    for(auto it = l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    //l1.pop_back();
    //l1.pop_front();

    //l1.remove(2);//remove all 2

    l1.reverse();

    for(auto it = l1.begin(); it!=l1.end();it++)
    {
        cout<<*it<<" ";
    }
    
}