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
    int count();
    int nodesum(Node *p);
    int max(Node *p);
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

int linkedlist :: count()
{
    Node *p = first;
    int c=0;
    while(p)
    {
        c++;
        p = p->next;
    }
    return c;
}

int linkedlist :: nodesum(Node *p)
{
    int sum = 0;
    while(p)
    {
        sum = sum+p->data;
        p = p->next;
    }
    return(sum);
}

int linkedlist :: max(Node *p)
{
    int max = 0;
    while(p!=0)
    {
        if(p->data>max)
        {
            max = p->data;
        }
        p=p->next;
    }
    return max;
}

int main()
{
    int A[]={1,2,3,4,5};
    linkedlist l(A,5);

    cout<<"Count the Node : "<< l.count()<<endl;

    cout<<"Sum of Nodes : "<< l.nodesum(first)<<endl;

    cout<<"Maximum in Nodes : "<< l.max(first)<<endl;
 
    l.display();
 
    return 0;
}