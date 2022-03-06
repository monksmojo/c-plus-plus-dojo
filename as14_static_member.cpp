#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
    static int cnt;
public:
    point()
    {   ++cnt;
        x=y=0;

    }
    point(int a, int b)
    {
        ++cnt;
        x=a;
        y=b;

    }
    point(const point &p0)
    {
        ++cnt;
        x=p0.x;
        y=p0.y;

    }
    static int get_cnt()
    {
        return cnt;
    }

};
int point::cnt=0;
int main()
{
    point p1;
    point p2(10,20);
    point p3(p2);
    int c=point::get_cnt();
    cout<<"no. of objects created\n"<<c<<endl;
    return 0;
}
