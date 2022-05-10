#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    public:
    void get_num(int a)
    {
        roll_no = a;
    }
    void put_num()
    {
        cout<<"Roll Number : "<<roll_no<<endl;
    }
};

class test : virtual public student
{
    protected:
    float m1, m2;
    public:
    void get_marks(float x, float y)
    {
        m1 = x;
        m2 = y;
    }
    void put_marks()
    {
        cout<<"\n\nMarks obtained : "<<endl;
        cout<<"Marks 1 : "<<m1<<endl<<"Marks 2 : "<<m2<<endl;
    }
};

class sports : public virtual student
{
    protected:
    float score;
    public:
    void get_score(float s)
    {
        score = s;
    }
    void put_score()
    {
        cout<<"\nSports : "<<score<<endl;
    }
};

class result : public test, public sports
{
    float total;

    public:
    void display()
    {
        total = m1 + m2 + score;

        put_num();
        put_marks();
        put_score();

        cout<<"\nTotal score : "<<total<<endl;
    }
};

int main()
{
    result r1;
    r1.get_num(678);
    r1.get_marks(46, 74);
    r1.get_score(57);

    r1.display();

    return 0;
}