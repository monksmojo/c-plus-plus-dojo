#include<iostream>
#include<stdlib.h>
using namespace std;
#define min 500
class account
{
private:
    int balance;
public:
    class low{};
    account(int b)
    {
        cout<<"minimum balance should be: "<< min <<endl;
        balance=b;
        print();
    }
    void dep(int amount)
    {
        balance=balance+amount;
    }
    void wid(int amount)
    {
        int b=balance-amount;
        if(b<min)
        {
            throw low();
        }
        else
        {
            balance=balance-amount;
        }
        print();
    }

    void print()
    {
        cout<<"current balance is:"<<balance<<endl;
    }

};
int main()
{
    account a1(600);
    cout<<"enter the amount to withdraw\n";
    int amount;
    cin>>amount;
    try
    {
        a1.wid(amount);
    }
    catch (account::low)
    {
        cout<<"cannot withdraw that much amount \n";
    }
    return 0;
}
