#include<iostream>
#include<stdio.h>
using namespace std;
class fraction
{
  private:
    int nem,dem;
  public:
    fraction();
    fraction(int n,int d);
    fraction(const fraction &f);
    void setvalues();
    void print();
    void add(const fraction &f);
    fraction subtract(fraction &f);
};
fraction::fraction()
{
  cout<<"inside defult constructor\n";
  nem=0;
  dem=1;
  print();
}
fraction::fraction(int n,int d)
{
  cout<<"inside defult parameterized constructor\n";
  nem=n;
  dem=d;
  print();
}
fraction::fraction(const fraction &f)
{
  cout<<"inside copy constructor\n";
  nem=f.nem;
  dem=f.dem;
  print();
}
void fraction::add(const fraction &f)
{
  cout<<"inside add function\n";
  nem=nem+f.nem;
  dem=dem+f.dem;
  print();
}
fraction fraction::subtract(fraction &f)
{
  cout<<"inside subtract function\n";
  fraction temp;
  temp.nem=nem-f.nem;
  temp.dem=dem-f.dem;
  return temp;
}
void fraction::setvalues()
{
  cout<<"enter the value of numerator   n:";
  cin>>nem;
  cout<<"enter the value of denominator d:";
  cin>>dem;
}
void fraction::print()
{
  cout<<"printing values\n";
  cout << "N/M : " <<nem<<"/"<<dem<<endl;
}

int main()
{
  fraction f1;
  fraction f2(7,2);
  f1.setvalues();
  f1.add(f2);
  fraction f3(f1);
  fraction f4;
  f4=f3.subtract(f2);
  f4.print();
}
