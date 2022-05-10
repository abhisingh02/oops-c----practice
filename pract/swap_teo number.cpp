#include<iostream>
using namespace std;

int main()
{
    int a=5,b=10,temp;
    cout<<"Before Swapping : ";
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping : "<<endl;
    cout<<"a="<<a<<endl<<"b="<<b<<endl;
    return 0;
}