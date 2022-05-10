#include <iostream>
using namespace std;
class test
{
private:
    string str;

public:
    test(string s)
    {
        str = s;
    }
    friend void printeven(test ob);
};
void printeven(test ob)
{
    int i=0;
    int l=0;
    l = ob.str.length();
    while (i < l)
    {
        if (i % 2 != 0)
        {
            cout << ob.str.at(i) << " ";
        }
        i = i + 1;
    }
}
int main()
{
    string s;
    cout << "enter the string" << endl;
    getline(cin, s);
    test ob(s);
    printeven(ob);
    return 0;
}
