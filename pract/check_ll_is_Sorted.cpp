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
    int isSorted(Node *p);
    ~linkedlist();
};

linkedlist :: linkedlist(int A[],int n)
{
    Node *last,*t;

    first = new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t =new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

linkedlist :: ~linkedlist()
{
    Node *p = first;
    while(p!=NULL)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

void linkedlist :: display()
{
    Node *p = first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int linkedlist :: isSorted(Node *p)
{
    int x=-65536;
    p=first;
    while(p!=NULL)
    {
        if(p->data<x)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 0;
}

int main()
{
    int A[] = {1,2,8,4,5};
    linkedlist l(A,5);

    cout<<l.isSorted(first)<<endl;

    l.display();
}