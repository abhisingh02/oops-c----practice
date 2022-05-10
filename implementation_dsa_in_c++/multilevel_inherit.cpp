#include<iostream>
using namespace std;

class student
{
    string name;
    int rollno;

    public:
    void getInfo()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter roll no. : ";
        cin>>rollno;
    }
    void showInfo()
    {
        cout<<name<<endl<<rollno<<endl;
    }
};
class marks : public student
{
    public:
    int m1, m2, m3, m4, m5;
    void getmarks()
    {
        cout<<"Enter marks : ";
        cin>>m1>>m2>>m3>>m4>>m5;
    }
    void showmarks()
    {
        cout<<m1<<endl<<m2<<endl<<m3<<endl<<m4<<endl<<m5<<endl;
    }
};
class result : public marks
{
    int total, avg;
    public:
    void get()
    {
        total = m1+m2+m3+m4+m5;
        avg = total/5;
    }
    void show()
    {
        cout<<total<<endl<<avg<<endl;
    }
};
int main()
{
    result r1;
    r1.getInfo();
    r1.getmarks();
    r1.get();
    r1.showInfo();
    r1.showmarks();
    r1.show();
}