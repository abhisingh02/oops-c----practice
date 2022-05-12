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
    int Delete(Node *p,int index);
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

int linkedlist :: Delete(Node *p,int index)
{
    Node *q=NULL;
    p=first;
    int x =-1;
    if(index==1)
    {
        q=p;
        x=p->data;
        first=p->next;
        free(q);
        return x;

    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        x=p->data;
        free(p);
        return x;
    }
}

int main()
{
    int A[] = {1,2,3,4,5};
    linkedlist l(A,5);

    l.Delete(first,3);

    l.display();
}