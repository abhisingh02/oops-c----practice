#include<iostream>
using namespace std;

void arraySort(int A[], int B[], int p, int q,int C[])
{
    int i = 0, j = 0, k = 0;
 
    while (i<p && j <q)
    {
        if (A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }
 
    while (i < p)
        C[k++] = A[i++];

    while (j < q)
        C[k++] = B[j++];
}

int main()
{
    int p,q;
    cout<<"Enter the Size of array A = "<<endl;
    cin>>p;
    int A[p];
    cout<<"Enter the array A element : "<<endl;
    for(int i=0;i<p;i++)
    {
        cin>>A[i];
    }

    cout<<"Enter the Size of array B = "<<endl;
    cin>>q;
    int B[q];
    cout<<"Enter the array A element : "<<endl;
    for(int j=0;j<q;j++)
    {
        cin>>B[j];
    }

    int C[p+q];
    arraySort(A, B, p, q, C);

   int k;
   cout<<"A : ";
   for(k=0;k<p;k++)
   {
       cout<<C[k]<<" ";
   }
   cout<<endl;
   cout<<"B : ";
   for(k=p;k<p+q;k++)
   {
       cout<<C[k]<<" ";
   }
 
    return 0;
}