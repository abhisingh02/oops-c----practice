#include<bits/stdc++.h>
using namespace std;

int binarySsearch(int A[],int l,int r,int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(A[m]==x)
        {
            return m;
        }
        else if(A[m]<x)
        {
            l=m+1;
        }
        else
        {
            r=m-1;
        }
    }
    return -1;
}

int RbinarySearch(int A[],int l,int r,int x)
{
    if(r>=l)
    {
        int m=(l+r)/2;
        if(A[m]=x)
        {
            return m;

        }
        else if(A[m]>x)
        {
            return RbinarySearch(A,l,m-1,x);
        }
        else
        {
            return RbinarySearch(A,m+1,r,x);
        }
    }
}
int main()
{
    int A[] = {3,4,5,6,7,8,9};

    int x;
    cout<<"Enter the key = \n";
    cin>>x;
    int n = sizeof(A)/sizeof(A[0]);
    int result = binarySsearch(A,0,n-1,x);
    if(result == -1){
        cout<<"Not found";
    }
    else{
        cout<<"found";
    }
    return 0;
}