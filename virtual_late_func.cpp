#include<iostream>
#include<conio.h>
using namespace std;
class base
{
private:

public:
    virtual void print()
    {
        cout<<"base integer: ";
    }
};

class derive : public base
{
private:

public:

    void print()
    {
        cout<<"derived integer: ";
    }
};


int main()
{
    base *b;
    derive d;
    b=&d;
    b->print();
    return 0;
}
