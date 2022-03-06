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

  int get_dollar()
  {
    return dollar;
  }

  int get_cents()
  {
    return  cents;
  }

  void set_uvalues(int d, int c)
  {
    check(d,c);
    dollar=d;
    cents=c;
  }

  void udisplay()
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


  int get_rupees()
  {
    return rupees;
  }

  int get_paisa()
  {
    return  paisa;
  }


  void set_ivalues(int r,int p)
  {
    check(r,p);
    rupees=r;
    paisa=p;
  }

  void idisplay()
  {
    cout<<rupees<<":rupees  "<<paisa<<":paisa  "<<endl;
  }
};

void convert2r(india &ic, usa &uc)
{
  int nr,np;
  nr=64*uc.get_dollar();
  np=64*uc.get_cents();
  ic.set_ivalues(nr,np);
  ic.idisplay();
}

void convert2d(india &ic, usa &uc)
{
  int nd,nc;
  nd=ic.get_rupees()/64;
  nc=ic.get_paisa()/64;
  uc.set_uvalues(nd,nc);
  uc.udisplay();
}

int main()
{
  int ch;
  cout<<"welcome to curency converter\n";
  while (1) {
    cout<<"1. convert INR to USD"<<endl;
    cout<<"2. convert USD to INR"<<endl;
    cout<<"3.exit\n";
    cout<<"enter your choice\n";
    cin>>ch;
    switch (ch) {
      case 1:
      {
        int rs,ps;
        cout<<"INR TO USD\n";
        cout<<"enter rupees you want to convert\n";
        cin>>rs;
        cout<<"enter the paisa you want to convert\n";
        cin>>ps;
        india i(rs,ps);
        i.idisplay();
        usa u;
        convert2d(i,u);
        cout << "\n\n";
        break;
      }
      case 2:
      {
        int ds,cs;
        cout<<"USD TO INR\n";
        cout<<"enter dollars you want to convert\n";
        cin>>ds;
        cout<<"enter the cents you want to convert\n";
        cin>>cs;
        usa u(ds,cs);
        u.udisplay();
        india i;
        convert2r(i,u);
        cout << "\n\n";
        break;
      }

      case 3:
      {
        exit(0);
      }
    }
  }
}
