#include<stdio.h>
#include<iostream>
using namespace std;
class point //COMPONENT CLASS
{
//private:
public:
  int x,y;
  point()
  {
    cout<<"COMPONENT CLASS default constructor\n";
    x=0;
    y=0;
    print();
  }

  point(int a,int b)
  {
    cout<<"COMPONENT CLASS parameterised default constructor\n";
    x=a;
    y=b;
    print();
  }

  point(const point &p)
  {
    cout<<"COMPONENT CLASS copy constructor\n";
    x=p.x;
    y=p.y;
    print();
  }

  void print()
  {
    //cout<<"POINT COMPONENT CLASS\n";
    cout<<"point x: "<<x<<"\n";
    cout<<"point y: "<<y<<"\n";
  }
  /*void hello()
  {
    cout<<"hello from container class\n";
  }*/
};

class circle
{
private:
  int radius;
  point center;
public:
  circle()
  :center()
  {
    radius=0;
    cout<<"CONTAINER CLASS default constructor\n";
    cprint();
  }


  circle(int x,int y,int z)
  :center(y,z)
  {
    cout<<"CONTAINER CLASS parameterized constructor\n";
    radius=x;
    cprint();
  }

  circle(point &p,int r)
  :center(p)
  {
    cout<<"CONTAINER CLASS constructor\n";
    radius=r;
    cprint();
  }

  void cprint()
  {
    cout <<"radius of circle: "<<radius<< '\n';
    cout <<"center of circle: "<<center.x<<" "<<center.y<< '\n';
  }

};

int main()
{
  circle c1;
  cout<<"\n\n";
  circle c2(10,2,2);
  cout<<"\n\n";
  point p1(4,4);
  circle c3(p1,6);
  return 0;
}
