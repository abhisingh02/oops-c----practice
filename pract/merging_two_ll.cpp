#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL, *second = NULL, *third = NULL;

class linkedlist1
{
public:
    linkedlist1();
    linkedlist1(int A[], int n);
    ~linkedlist1();
};

linkedlist1 ::linkedlist1(int A[], int n)
{
    Node *last, *t;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

linkedlist1 ::~linkedlist1()
{
    Node *p = first;
    while (p != NULL)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

class linkedlist2
{
public:
    linkedlist2();
    linkedlist2(int A[], int n);
    ~linkedlist2();
};

linkedlist2 ::linkedlist2(int A[], int n)
{
    Node *last, *t;

    second = new Node;
    second->data = A[0];
    second->next = NULL;
    last = second;

    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

linkedlist2 ::~linkedlist2()
{
    Node *p = second;
    while (p != NULL)
    {
        second = second->next;
        delete p;
        p = second;
    }
}

void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if (p)
        last->next = p;
    if (q)
        last->next = q;
}

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    linkedlist1 l1(A, 5);

    Display(first);
    cout << endl;

    int B[] = {6, 7, 8, 9};
    linkedlist2 l2(B, 4);

    Display(second);

    cout<<endl;

    Merge(first,second);
    Display(third);

}