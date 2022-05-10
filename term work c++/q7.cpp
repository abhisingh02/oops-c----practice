#include <iostream>
using namespace std;

class SavingsAccount
{
    float savingbal;
public:
    SavingsAccount() {}

    SavingsAccount(int value);

    static float annualInterestRate;

    void calculateMonthlyInterest();

    static void modifyIntererestRate(float value);

    float GetBalance() const
    {
        return savingbal;
    }
};
SavingsAccount::SavingsAccount(int value)
{
    savingbal = value;
}
float SavingsAccount::annualInterestRate = 0;
void SavingsAccount::calculateMonthlyInterest()
{
    savingbal = (savingbal + (savingbal * annualInterestRate) / 12);
}
void SavingsAccount::modifyIntererestRate(float value)
{
    annualInterestRate = value;
}
int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);
    SavingsAccount::modifyIntererestRate(4);
    saver1.calculateMonthlyInterest();
    cout << "Saver 1 Savings Balance: $" << saver1.GetBalance() << endl;
    saver2.calculateMonthlyInterest();
    cout << "Saver 2 Savings Balance: $" << saver2.GetBalance() << endl;
    cout << endl;
    SavingsAccount::modifyIntererestRate(5);
    saver1.calculateMonthlyInterest();
    cout << "Saver 1 Savings Balance: $" << saver1.GetBalance() << endl;
    saver2.calculateMonthlyInterest();
    cout << "Saver 2 Savings Balance: $" << saver2.GetBalance() << endl;
    cout << endl;
    return 0;
}