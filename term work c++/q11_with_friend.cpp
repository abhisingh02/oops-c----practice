#include <iostream>
using namespace std;

class UnaryFriend
{
    int a = 15;
    int b = 25;

public:
    void getvalues()
    {
        cout << "Values of A & B\n";
        cout << a << "\n"<< b << "\n"<< endl;
    }
    void show()
    {
        cout << a << "\n"<< b << "\n" << endl;
    }
    void friend operator-(UnaryFriend &x);
    void friend operator++(UnaryFriend &x);
    void friend operator--(UnaryFriend &x);
};

void operator-(UnaryFriend &x)
{
    x.a = -x.a;
    x.b = -x.b;
}

void operator++(UnaryFriend &x)
{
    x.a = ++x.a;
    x.b = x.b++;
}

void operator--(UnaryFriend &x)
{
    x.a = --x.a;
    x.b = x.b--;
}

int main()
{
    UnaryFriend x1;
    UnaryFriend x2;
    UnaryFriend x3;

    x1.getvalues();

    cout << "Before Overloading\n";
    x1.show();

    cout << "After Overloading \n";
    -x1;

    x1.show();
    x2.getvalues();

    cout << "Before Pre and Post increment Overloading\n";
    x2.show();

    cout << "After Pre and Post increment Overloading \n";
    ++x2;

    x2.show();
    x3.getvalues();

    cout << "Before Pre and Post decrement Overloading\n";
    x3.show();

    cout << "After Pre and Post decrement Overloading \n";
    --x3;

    x3.show();

    return 0;
}