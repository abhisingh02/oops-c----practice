#include<iostream>
using namespace std;

class employee
{
    private:
    int pan;
    float taxincome;
    float tax;
    string name;

    public:
    
    void inputinfo();
    
    void calc();
    
    void displayinfo();
    
};

void employee :: inputinfo()
{
    cout<<"Enter name : ";
    getline(cin,name);   
    cout<<"Enter Pan number : ";
    cin>>pan;
    cout<<"Enter taxable income : ";
    cin>>taxincome;
}

void employee :: calc()
{
    if (taxincome <= 250000)
       tax = 0;
    else if (taxincome <= 300000)
        tax = (taxincome - 250000) * 0.1;
    else if (taxincome <= 400000)
        tax = 5000 + ((taxincome - 300000) * 0.2);
    else
        tax = 25000 + ((taxincome - 400000) * 0.3);
}

void employee :: displayinfo()
{
    cout<<"Pan number : "<<pan<<endl<<"Name : "<<name<<endl<<"Taxable income : "<<taxincome<<endl<<"tax : "<<tax;
}

int main()
{
    employee e1;
    e1.inputinfo();
    e1.calc();
    e1.displayinfo();

    return 0;
}
