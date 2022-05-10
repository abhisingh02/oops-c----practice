#include <iostream>
using namespace std;

int main()
{
    int a = 1;
    cout << "a value before Unary Minus: " << a << endl;
    int b = -a;
    cout << "b value after -a : " << b << endl;
    a = 1;
    cout << "a value Post increment: " << a << endl;
    b = a++;
    cout << "b value after a++ : " << b << endl;
    cout << "a value after a++ : " << a << endl;

    a = 1;
    cout << "a value Pre increment:" << a << endl;
    b = ++a;
    cout << "b value after ++a : " << b << endl;
    cout << "a value after ++a : " << a << endl;

    a = 5;
    cout << "a value Post decrement: " << a << endl;
    b = a--;
    cout << "b value after a-- : " << b << endl;
    cout << "a value after a-- : " << a << endl;

    a = 5;
    cout << "a value Pre decrement: " << a << endl;
    b = --a;
    cout << "b value after --a : " << b << endl;
    cout << "a value after --a : " << a << endl;
    return 0;
}
