#include<iostream>
using namespace std;
class overDemo
{
    public:
    void teststring(string str, int l)
    {
        int i=0, c=0;
        for(i=l; i>=0; i--)
        {
            c++;
        }
        cout<<"Number of character from right is : "<<c<<endl;
    }
    void teststring(string h)
    {
        int i=0, l;
        string t;
        for(i=h.length()-1; i>=0; i--)
        {
            t = t + h.at(i);
        }
        if(h.compare(t)==0)
        {
            cout<<"Palindrome"<<endl;
        }
        else
        {
            cout<<"Not a Palindrome"<<endl;
        }
    }
};

int main()
{
    overDemo od;
    string s;
    int l;

    cout<<"Counting the character"<<endl;

    cout<<"Enter the string : "<<endl;
    getline(cin, s);

    l = s.length()-1;
    od.teststring(s, l);

    cout<<"\n\nFor Palindrome"<<endl;
    string t;
    cout<<"Enter the string : "<<endl;
    getline(cin, t);

    od.teststring(t);

    return 0;
}