#include<iostream>
using namespace std;

class toolbooth
{
    unsigned int car;
    double am;
    public:
    toolbooth()
    {
        car = 0;
        am = 0;
    }
    void payingCar()
    {
        car++;
        am = am+0.5;
    }
    void nonPayCar()
    {
        car++;
    }
    void display()
    {
        cout<<"Total car : "<<car<<endl;
        cout<<"Total amount : "<<am<<endl;
    }
};
int main()
{
    toolbooth tb;
    int ch;
    do
    {
        cout<<"Enter Your choice : "<<endl;

        cout<<"1.Paying car"<<endl<<"2.Non Paying car"<<endl<<"ESC.Total"<<endl;
        cin>>ch;

        switch(ch)
        {
            case 1:
            {
                tb.payingCar();
                tb.display();
                break;
            }
            case 2:
            {
                tb.nonPayCar();
                tb.display();
                break;
            }
            case 3:
            {
                tb.display();
                exit(0);
                break;
            }
        }
    }while(ch!=0);

    return 0;
}