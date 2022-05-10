#include<iostream>
using namespace std;

class Complex
{
    int real;
    int img;
    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        img = i;
    }
    Complex operator+(Complex ob)
    {
        Complex res;
        res.real = real + ob.real;
        res.img = img + ob.img;
        return res;
    }
    Complex operator-(Complex ob)
    {
        Complex res;
        res.real = real - ob.real;
        res.img = img - ob.img;
        return res;
    }
    string operator==(Complex ob)
    {
        if(real == ob.real && img == ob.img)
        {
            return "True";
        }
        else
        {
            return "False";
        }
    }
    void display()
    {
        if(img<0)
        {
            img = 2*img - img;
            cout<<real<<" -i "<<img<<endl;
        }
        else if(img>1)
        {
            cout<<real<<" +i "<<img<<endl;
        }
        else if(img==1)
        {
            cout<<real<<" +i "<<img<<endl;
        }
        else if(img == 0)
        {
            cout<<real<<endl;
        }
    }
};

int main()
{
    Complex a(4, 9), b(3, 7);
    Complex c;

    c = a + b;
    c.display();

    c = a - b;
    c.display();
    
    string d = (a==b);
    cout<<d;

    return 0;
}