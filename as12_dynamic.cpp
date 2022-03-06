#include<iostream>
using namespace std;
#include<cstring>
class base
{
public:
     virtual void show()
    {
        cout<<"this is base class";
    }


};
class derive: public base
{
public:
    void show()
    {
        cout<<"this is derive class";
    }

};
int main()
{
    base *b;
    derive d;
    b=&d;
    b->show();
    return 0;
}
