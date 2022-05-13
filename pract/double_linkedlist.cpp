#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
}*first=NULL;

class Double_ll
{
    public:
    Double_ll();
    Double_ll(int A[],int n);
    void display(Node *p);
    int length(Node *p);
    void insert(Node *p,int index,int x);
    int Delete(Node *p,int index);
    ~Double_ll();
};

Double_ll :: Double_ll(int A[],int n)
{
    Node *last, *t;

    first = new Node;
    first->data = A[0];
    first->next=NULL;
    first->prev=NULL;
    last=first;

    for(int i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

Double_ll :: ~Double_ll()
{
    Node *p=first;
    while(p!=NULL)
    {
        first=first->next;
        delete p;
        p=first;
    }
}

void Double_ll :: display(Node *p)
{
    p=first;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int Double_ll :: length(Node *p)
{
    int l=0;
    while(p!=NULL)
    {
        l++;
        p=p->next;
    }
    return l;
}

void Double_ll :: insert(Node *p,int index,int x)
{
    Node *t;
    t = new Node;
    t->data=x;
    if(index==0)
    {
        t->prev=NULL;
        t->next=first;
        first=t;
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next)
        {
            p->next->prev=t;
        }
        p->next=t;
    }
}

int Double_ll :: Delete(Node *p,int index)
{
    int x=-1;
    p=first;
    if(index==1)
    {
        first=first->next;
        if(first!=NULL)
        {
            first->prev=NULL;
        }
        x=p->data;
        free(p);
    }
    else
    {
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        p->prev->next=p->next;
        if(p->next!=NULL)
        {
            p->next->prev=p->prev;
        }
        x=p->data;
        free(p);
    }
    return x;
}

int main()
{
    int A[] = {10,20,30,40,50};
    Double_ll dl(A,5);

    //dl.insert(first,4,9);
    dl.Delete(first,1);

    dl.display(first);

    //cout<<"\nLength of the Node is : "<<dl.length(first)<<endl;
    return 0;

}