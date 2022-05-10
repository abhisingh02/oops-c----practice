#include <iostream>
using namespace std;

class student
{
    string name;
    int age, enroll_no, marks;

public:
    void getinfo_s()
    {
        cout << "Enter name : ";
        getline(cin, name);
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter Enrollment number : ";
        cin >> enroll_no;
        cout << "Enter marks : ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name : " << name << endl
             << "Age : " << age << endl
             << "Enrollment number : " << enroll_no << endl
             << "Marks : " << marks << endl;
    }
};

class faculty
{
    string fn, code, gender, deptt;
    int age, salary, experience;

public:
    void getinfo_f()
    {
        cout << "Enter faculty name : ";
        cin>>fn;
        cout << "Enter faculty code : ";
        cin >> code;
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Enter department : ";
        cin>>deptt;
        cout << "Enter age : ";
        cin >> age;
        cout << "Enter salary : ";
        cin >> salary;
        cout << "Enter experience : ";
        cin >> experience;
    }
    void display()
    {
        cout << "Faculty name : " << fn << endl
             << "Faculty code : " << code << endl
             << "Gender : " << gender << endl
             << "Department : " << deptt << endl;
        cout << "Age : " << age << endl
             << "Salary : " << salary << endl
             << "Experience : " << experience << endl;
    }
};

class person : public student, public faculty
{
};

int main()
{
    person p;

    p.getinfo_s();
    p.getinfo_f();

    cout<<"\n\nStudent Details\n\n "<<endl;
    p.student :: display();
    
    cout<<"\n\nFaculty Details \n\n"<<endl;
    p.faculty :: display();

    return 0;
}