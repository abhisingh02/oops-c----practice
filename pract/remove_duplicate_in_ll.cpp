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
    void removeDuplicate(Node *p);
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

void linkedlist :: removeDuplicate(Node *p)
{
    p=first;
    Node *q = first->next;
    while(q!=NULL)
    {
        if(p->data!=q->data)
        {
            p=q;
            q=q->next;
        }
        else
        {
            p->next=q->next;
            free(q);
            q=p->next;
        }
    }
}

int main()
{
    int A[] = {1,2,4,4,5};
    linkedlist l(A,5);

    l.removeDuplicate(first);

    l.display();
}