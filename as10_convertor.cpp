#include <iostream>
using namespace std;
#include <stdlib.h>



void check(int &dr,int &pc)
{
  while(pc>=100)
  {
    dr=dr+1;
    pc=pc-100;
  }
}
class india;
class usa
{
private:
  int dollar;
  int cents;

public:
  usa()
  {
    dollar=cents=0;
  }
  usa(int d,int c)
  {
    dollar=d;
    cents=c;
  }
  usa(india *i)//to convert rupees & paisa into dollar
  {
    i=new india();
    dollar=i->get_rupees();
    cents=i->get_paisa();
    check(dollar,cents);
  }

  int get_dollar()
  {
    return dollar;
  }

  int get_cents()
  {
    return  cents;
  }

  void display()
  {
    cout<<dollar<<": dollar "<<cents<<": cents"<<endl;
  }

};


class india
{
private:
  int rupees;
  int paisa;

public:
  india()
  {
    rupees=paisa=0;
  }
  india(int r,int p)
  {
    rupees=r;
    paisa=p;
  }

  india(usa &uc)
  {
      rupees=uc.get_dollar();
      paisa=uc.get_cents();
      check(rupees,paisa);
  }

  int get_rupees()
  {
    return rupees;
  }

  int get_paisa()
  {
    return  paisa;
  }

};
