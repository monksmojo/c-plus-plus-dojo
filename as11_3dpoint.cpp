#include<iostream>
using namespace std;
class point
{
private:
    int a,b;
public:
    point()
    {
        cout<<"default constructor\n";
        a=0;
        b=0;
        ppoint();
    }
    point(int x, int y)
    {
        cout<<"parameterized constructor\n";
        a=x;
        b=y;
        ppoint();
    }
    point(const point &p1)
    {
        cout<<"copy constructor\n";
        a=p1.a;
        b=p1.b;
        ppoint();
    }
    void ppoint()
    {
        cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
    }
};

class tdpoint:public point
{
    private:
        int c;
    public:
        tdpoint():point()
        {
            c=0;
            ttdpoint();
        }
        tdpoint(int x, int y, int z):point(x,y)
        {
            c=z;
            ttdpoint();
        }
        tdpoint(const tdpoint &t1):point(t1)
        {
            c=t1.c;
            ttdpoint();
        }
        void ttdpoint()
        {
            cout<<"c:"<<c<<endl;
        }
};
int main()
{
    tdpoint t1 ;
    tdpoint t2(10,20,30);
    tdpoint t3=t2;
    return 0;

}
