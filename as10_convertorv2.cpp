#include<iostream>
using namespace std;
#include <stdlib.h>
class FI
{
private:
  float foot;
  float inches;
public:
  FI()
  {
    foot=0.0;
    inches=0.0;
  }

  FI(float f, float i)
  {
    foot=f;
    inches=i;
  }

  float get_foot()
  {
    return foot;
  }

  float get_inches()
  {
    return inches;
  }

  void set_fivalues(float f,float i)
  {
    foot=f;
    inches=i;
  }

  void fidisplay()
  {
    cout<<foot<<":foot  "<<inches<<":inches  "<<endl;
    cout<<"\n";
  }

};


class MC
{
private:
  float meter;
  float centimeter;
public:
  MC()
  {
    meter=0;
    centimeter=0;
  }

  MC(float m, float c)
  {
    meter=m;
    centimeter=c;
  }

  float get_meter()
  {
    return meter;
  }

  int get_centimeter()
  {
    return centimeter;
  }

  void set_mcvalues(float m,float c)
  {
    meter=m;
    centimeter=c;
  }

  void mcdisplay()
  {
    cout<<meter<<":meter  "<<centimeter<<":in  "<<endl;
    cout<<"\n";
  }

};

void fi2mc(FI &f1)
{
  float m,c;
  m=f1.get_foot()*0.30;
  c=f1.get_inches()*2.45;
  while(c>=100)
  {
    m+=1;
    c=c-100;
  }
  MC m1(m,c);
  m1.mcdisplay();
}

void mc2fi(MC &m1)
{
  float f,i;
  f=m1.get_meter()*3.2;
  i=m1.get_centimeter()*0.30;
  while(i>=12)
  {
    f+=1;
    i=i-12;
  }
  FI f1(f,i);
  f1.fidisplay();
}

int main()
{
cout<<"1 foot = 12 inches"<<endl;
cout<<"1 foot = 0.30 meter"<<endl;
cout<<"1 meter = 100 cm "<<endl;
cout<<"1 meter = 3.2 feet"<<endl;
cout<<"1 centimeter=0.30 inches"<<endl;
cout<<"1 inches=2.45 centimeter"<<endl;
int ch;
cout<<"welcome to metric conversion\n";
while (1) {
  cout<<"1. convert foot/inches to meter/centimeter"<<endl;
  cout<<"2. convert meter/centimeter to foot/inches"<<endl;
  cout<<"3.exit\n";
  cout<<"enter your choice\n";
  cin>>ch;
  switch (ch) {
    case 1:
    {
      float f,i;
      cout<<"foot/inches to meter/centimeter\n";
      cout<<"enter foot you want to convert\n";
      cin>>f;
      cout<<"enter the inches you want to convert\n";
      cin>>i;
      FI fi(f,i);
      fi.fidisplay();
      fi2mc(fi);
      cout << "\n\n";
      break;
    }
    case 2:
    {
      float m,c;
      cout<<"meter/centimeter to foot/inches\n";
      cout<<"enter meter you want to convert\n";
      cin>>m;
      cout<<"enter the centimeter\n";
      cin>>c;
      MC mc(m,c);
      mc.mcdisplay();
      mc2fi(mc);
      cout << "\n\n";
      break;    }

    case 3:
    {
      exit(0);
    }
  }
}

}
