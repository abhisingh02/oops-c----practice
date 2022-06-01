#include<bits/stdc++.h>
using namespace std;

void display(queue <int> qu)
{
    while(!qu.empty())
    {
        cout<<qu.front()<<" ";
        qu.pop();
    }
}

int main()
{
    queue <int> qu;
    qu.push(1);
    qu.push(3);
    qu.push(9);
    qu.push(8);
    qu.push(11);

    display(qu);
    cout<<endl; 

    cout<<qu.front()<<endl;

    qu.pop();
    cout<<qu.front()<<endl;

    cout<<qu.size()<<endl;
}