#include<bits/stdc++.h>
using namespace std;

void display(stack <int> st)
{
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    stack <int> st;
    st.push(1);
    st.push(3);
    st.push(2);
    st.push(5);

    display(st);
    cout<<endl;

    cout<<st.top()<<endl;

    st.pop();

    cout<<st.top()<<endl;

    cout<<st.size()<<endl;
}