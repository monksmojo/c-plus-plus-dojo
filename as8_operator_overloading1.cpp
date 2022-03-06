#include<iostream>
using namespace std;
#include<stdio.h>
#include<stdlib.h>

class point
{
private:
  int x,y;
public:
  point()
  {

    x=y=0;
  }
  point(int a,int b)
  {
    cout<<"creating the point\n";
    x=a;
    y=b;
    display();
  }

  istream& operator>>(istream &in)
  {
    cout<<"cin operation\n";
    in>>x;
    if(in.ios::bad()!=0)
    {
      return in;
    }
    in>>y;
    if(in.ios::bad()!=0)
    {
      return in;
    }

    return in;
  }

  point& operator=(point &p)
  {
    cout<<"assigment operator\n";
    x=p.x;
    y=p.y;
    return *this;
  }

  void operator ++()
  {
    cout<<"pre increment operator\n";
    x=x+1;
    y=y+1;
  }

  point operator ++(int)
  {
    cout << "post increment operator" << '\n';
    point temp;
    temp.x=x+1;
    temp.y=y+1;
    return temp;
  }

  void display()
  {
    cout<<"the 2 points are"<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"y: "<<y<<endl;
  }
};

int main()
{
  int ch;

  cout<<"1. cin >> operator"<<endl;
  cout<<"2. = assigment operator"<<endl;
  cout<<"3. ++o pre increment operator "<<endl;
  cout<<"4. o++ post increment operator "<<endl;
  cout<<"5. exit "<<endl;
  while(1)
  {
  cout << "select your option\n" <<endl;
  cin>>ch;

    switch (ch)
    {
      case 1:
      {
        point p1;
        point p2;
        p1>>(p2>>cin);
        p1.display();
        p2.display();
        break;

      }


      case 2:
      {
        point p3(3,4);
        point p4(1,2);
        p3=p4;
        p3.display();
        p4.display();
        break;
      }

      case 3:
      {
        point p3(1,2);
        ++p3;
        p3.display();
        break;
      }

      case 4:
      {
        point p3(1,2);
        p3++;
        p3.display();
        break;
      }

      case 5:
      {
        exit(0);
      }
    }
  }
  return 0;
}
