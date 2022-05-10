#include <iostream>
using namespace std;

class temperature
{
protected:
    float temp;

public:
    void setdata(float a)
    {
        temp = a;
    }
    virtual void changetemp()
    {
        return;
    }
};
class fahrenheit : public temperature
{
protected:
    float ctemp;

public:
    void changetemp()
    {
        ctemp = (temp - 32) * 0.5556;
        cout << "Temperature in celsius is :" << ctemp << " C" << endl;
    }
};
class celsius : public temperature
{
protected:
    float ftemp;

public:
    void changetemp()
    {
        ftemp = (temp * 1.8) + 32;
        cout << "Temperature in Fahrenheit is : " << ftemp << " F" << endl;
    }
};
int main()
{
    temperature *ob;
    fahrenheit fob;
    float a;
    cout << "Enter the temperature in fahrenheit : " << endl;
    cin >> a;
    fob.setdata(a);
    ob = &fob;
    ob->changetemp();
    float b;
    cout << "Enter the temperature in celsius : " << endl;
    cin >> b;
    celsius cob;
    cob.setdata(b);
    ob = &cob;
    ob->changetemp();
}
