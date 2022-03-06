#include<iostream>
using namespace std;
#include<cstring>

class gfigure
{
protected:
    int gside;
public:
    gfigure(int s)
    {
        gside=s;
    }
    virtual int area()=0;
    virtual int perimeter()=0;
};

class rectangle: public gfigure
{
private:
    int rside;
public:
    rectangle(int l ,int b):gfigure(l)
    {
        rside=b;
    }
    int area()
    {
        int a=rside*gside;
        return a;
    }
    int perimeter()
    {
        int p=2*(rside+gside);
        return p;
    }
};

int main()
{
    int length,breadth,ar=0,pr=0;
    cout<<"enter the length of rectangle \n";
    cin>>length;
    cout<<"enter the breadth of rectangle \n";
    cin>>breadth;
    gfigure *g1;
    rectangle r1(length,breadth);
    g1=&r1;
    ar=g1->area();
    cout<<"area of rectangle with length: "<<length<<"  breadth: "<<breadth<<"  is:"<<ar<<endl;
    pr=g1->perimeter();
    cout<<"perimeter of rectangle with length: "<<length<<"  breadth: "<<breadth<<"  is:"<<pr<<endl;
}
