#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
}*head;

class circ_ll
{
public:
    circ_ll();
    circ_ll(int A[], int n);
    void display(Node *p);
    void insert(Node *p,int index,int x);
    int Delete(Node *p,int index);
    ~circ_ll();
};

circ_ll :: circ_ll(int A[], int n)
{
    Node *last, *t;

    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

circ_ll ::~circ_ll()
{
    Node *p = head;
    while (p)
    {
        head = head->next;
        delete p;
        p = head;
    }
}

void circ_ll ::display(Node *p)
{
    p=head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
}

void circ_ll :: insert(Node *p,int index,int x)
{
    Node *t;
    t = new Node;
    if(index==0)
    {
        t->data=x;
        if(head==NULL)
        {
            head=t;
            head->next=head;
        }
        else
        {
            p=head;
            while(p->next!=head)
            {
                p=p->next;
            }
            p->next=t;
            t->next=head;
            head=t;
        }
    }
    else
    {
        p=head;
        for(int i=0;i<index-1;i++)
        {
            p=p->next;
        }
        t->data=x;
        t->next=p->next;
        p->next=t;
    }
}

int circ_ll :: Delete(Node *p,int index)
{
    Node *q;
    int x;
    if(index==1)
    {
        while(p->next!=head)
        {
            p=p->next;
        }
        x=head->data;
        if(head==p)
        {
            free(head);
            head=NULL;
        }
        else
        {
            p->next=head->next;
            free(head);
            head=p->next;
        }
    }
    else
    {
        for(int i=0;i<index-2;i++)
        {
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        x=p->data;
        free(q);
    }
    return x;
}

int main()
{
    int A[] = {2, 3, 4, 5, 6};
    circ_ll cl(A,5);

    cl.display(head);

    cout<<endl;

    //cl.insert(head,3,8);

    //cl.display();

    //cout<<endl;

    cl.Delete(head,4);

    cl.display(head);
    return 0;
}