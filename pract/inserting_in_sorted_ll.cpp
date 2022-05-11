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
    void sortedinsert(Node *p,int x);
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

void linkedlist :: sortedinsert(Node *p,int x)
{
    Node *t;
    Node *q=NULL;
    t = new Node;
    t->data=x;
    t->next=NULL;
    if(first=NULL)
    {
        first=t;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==first)
        {
            t->next=first;
            first=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
    }
}

int main()
{
    int A[]={1,2,3,4,8};
    linkedlist l(A,5);

    l.display();

    l.sortedinsert(first,6);

    l.display();
 
    return 0;
}