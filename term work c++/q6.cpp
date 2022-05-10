#include <iostream>
using namespace std;
class Time
{
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time()
    {
        this->hours = 0;
        this->minutes = 0;
        this->seconds = 0;
    };
    Time(int hr, int min, int sec)
    {
        this->hours = hr;
        this->minutes = min;
        this->seconds = sec;
    };
    int getHours()
    {
        return this->hours;
    };
    int getMinutes()
    {
        return this->minutes;
    };
    int getSeconds()
    {
        return this->seconds;
    };
    void display()
    {
        cout<<"Time = " << hours << ":" << minutes << ":" << seconds << endl;
    };
    Time add(Time t1, Time t2)
    {
        int hoursAdd = t1.getHours() + t2.getHours();
        if (hoursAdd > 23)
        {
            hoursAdd -= 24;
        }
        int minutesAdd = t1.getMinutes() + t2.getMinutes();
        if (minutesAdd > 59)
        {
            minutesAdd -= 60;
            hoursAdd += 1;
        }
        int secondsAdd = t1.getSeconds() + t2.getSeconds();
        if (secondsAdd > 59)
        {
            secondsAdd -= 60;
            minutesAdd += 1;
        }
        Time t3(hoursAdd, minutesAdd, secondsAdd);
        return t3;
    };
};
int main()
{
    Time t1(11, 39, 50);
    Time t2(20, 33, 29);
    Time t3;
    t3 = t3.add(t1, t2);
    t1.display();
    t2.display();
    t3.display();
    return 0;
}
