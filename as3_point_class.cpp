#include <iostream>
using namespace std;
class tpoint
{
private:
  int x;
  int y;
public:
  int getx();//t1 getx
  int gety();//t1 gety
  void print();
  void modify(int a,int b);//t1 modify
  tpoint();//t1 user defined defualt constructor with 0 parameters
  tpoint(int a,int b);//c1 user defined defualt constructor with 2 parameters
  tpoint(const tpoint &c)//c2 user defined copy constructor with copy value of c0;
  {
    cout << "inside copy constructor" << '\n';
    x=c.x;
    y=c.y;

    cout << "value of x:  "<< x << '\n';
    cout << "value of y:  "<< y << '\n';
  }
};
int tpoint::getx()
{
  cout << "enter the value of x" << '\n';
  cin>>x;
  return x;
}

int tpoint::gety()
{
  cout << "enter the value of y" << '\n';
  cin>>y;
  return y;
}
void tpoint::print()
{
  cout << "printing of values" << '\n';
  cout << "x:  "<< x << '\n';
  cout << "y:  "<< y << '\n';
}
void tpoint::modify(int a, int b)
{
  cout << "modifying of the cordinates\n";
  x+=a;
  y+=b;
}

tpoint::tpoint()
{
  cout << "inside user defined defualt constructor with 0 parameters" << '\n';
  x=0;
  y=0;
  print();
}
tpoint::tpoint(int a,int b)
{
  cout << "inside user defined defualt constructor with 2 parameters" << '\n';
  x=a;
  y=b;
  print();
}

int main()
{
  int p,q,a,b;
  tpoint t1;//calling of default constructor
  tpoint c1(20,40);//call to user defined defualt constructor with 2 parameters
  p=t1.getx();
  cout <<"value of x set to x: "<< p << '\n';
  q=t1.gety();
  cout <<"value of y set to y:"<< q << '\n';
  cout<<"modifying value of cordinates\n";
  cout << "increase the value of x by" << '\n';
  cin>>a;
  cout << "increase the value of y by" << '\n';
  cin>>b;
  t1.modify(a,b);
  t1.print();
  tpoint c2(t1);//call to user defined copy constructor to copy t1 object

  return 0;
}
