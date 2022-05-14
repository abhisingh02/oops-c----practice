#include <bits/stdc++.h>
using namespace std;

int linearSearch(int A[], int n, int key)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] = key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int A[] = {3, 4, 5, 6, 7, 8, 9};

    int x;
    cout<<"Enter the key : "<<endl;
    cin>>x;
    int n = sizeof(A) / sizeof(A[0]);
    int result = linearSearch(A, 0, x);
    if(result == -1)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not Found";
    }
    return 0;
}