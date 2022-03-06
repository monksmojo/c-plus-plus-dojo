#include <iostream>
#include<stdlib.h>
using namespace std;
class kpoint
{
 private:
  int x,y,z;
 public:
  kpoint();
  kpoint(int a,int b,int c);
  kpoint(const kpoint &k);
  void add(const kpoint &k);
  kpoint subtract(kpoint k);
  void setvalues();
  void print();
};
kpoint::kpoint()
{
  cout<<"inside system default constructor\n";
  x=0;
  y=0;
  z=0;
  print();
}
kpoint::kpoint(int a,int b,int c)
{
  cout<<"inside parameterized constructor\n";
  x=a;
  y=b;
  z=c;
  print();
}
kpoint::kpoint(const kpoint &k)
{
  cout<<"inside default copy constructor\n";
  x=k.x;
  y=k.y;
  z=k.z;
  print();
}
void kpoint::add(const kpoint &k)
{
  cout << "inside add function" << '\n';
  cout<<"taking object as parameter\n";
  x=x+k.x;
  y=y+k.y;
  z=z+k.z;
  print();
}
kpoint kpoint::subtract(kpoint k)
{
  cout << "inside subtract function" << '\n';
  cout<<"taking object as parameter and returning object\n";
  kpoint temp;
  temp.x=x-k.x;
  temp.y=y-k.y;
  temp.z=z-k.z;
  return temp;
}
void kpoint::setvalues()
{
  cout << "enter the values of x: ";
  cin>>x;
  cout << "enter the values of y: ";
  cin>>y;
  cout << "enter the values of z: ";
  cin>>z;
}
void kpoint::print()
{
  cout << "printing of values" << '\n';
  cout << "x:"<<x<<"\n";
  cout << "y:"<<y<<"\n";
  cout << "z:"<<z<<"\n";

}

int main()
{
  kpoint k1;
  k1.setvalues();
  kpoint k2(10,20,30);
  k1.add(k2);
  k1.print();
  kpoint k3(k1);
  kpoint k4=k3.subtract(k2);
  k4.print();
  return 0;
}
