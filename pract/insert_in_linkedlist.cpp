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
    void insert(Node *p,int idx,int x);
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

void linkedlist :: insert(Node *p,int idx,int x)
{
    Node *t;
    t = new Node;
    t->data=x;
    if(idx==0)
    {
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<idx-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;
    }
}

int main()
{
    int A[]={1,2,3,4,5};
    linkedlist l(A,5);

    l.display();
    cout<<endl;

    l.insert(first,3,8);

    l.display();
 
    return 0;
}