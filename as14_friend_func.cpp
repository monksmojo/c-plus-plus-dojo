#include<iostream>
using namespace std;
class point
{
private:
  int x,y;
public:
  friend void func(point &po);
  point(int a,int b)
  {
    cout<<"settting of points through parameterized constructor\n";
    x=a;
    y=b;
  }
};

void func(point &po)
{
  cout<<"accessing private data memmbers through friend function \n";
  cout<<"x: "<<po.x<<endl;
  cout << "y: "<<po.y<<endl;
}

int main()
{
  point p1(10,20);
  func(p1);
}
