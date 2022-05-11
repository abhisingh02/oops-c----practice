#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
}*first=NULL;

class linkedlist
{
    public:
    linkedlist();
    linkedlist(int A[],int n);
    void display();
    bool search(Node *first,int x);
    ~linkedlist();
};

linkedlist :: linkedlist(int A[],int n)
{
    Node *last, *t;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

linkedlist :: ~linkedlist()
{
    Node *p = first;
    while(p!=NULL)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void linkedlist :: display()
{
    Node *p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}

bool linkedlist :: search(Node *first,int x)
{
    Node *p = first;
    while(p!=NULL)
    {
        if(x==p->data)
        {
            return true;
        }
        p=p->next;
    }
    return false;

}

int main()
{
    int A[]={1,2,3,4,5};
    linkedlist l(A,5);

    l.display();

    int x;
    cout<<"Enter your key"<<endl;
    cin>>x;

    if(l.search(first,x))
    {
        cout<<"Key is found "<<x;
    }
    else
    {
        cout<<"Key is not found";
    }

 
    return 0;
}