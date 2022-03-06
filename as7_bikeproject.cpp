#include<iostream>
using namespace std;
#include <cstring>
#include <stdio.h>
class rider
{
private:
  char *rname;
  int rage;
  char *rcity;
public:
  rider()
  {
    rname=new char[strlen("empty")+1];
    strcpy(rname,"empty");
    rage=0;
    rcity=new char[strlen("NULL")+1];
    strcpy(rcity,"NULL");
    rprint();
  }

  rider(char rn[],int ra,char rc[])
  {
    rname=new char[strlen(rn)];
    strcpy(rname,rn);
    rage=ra;
    rcity=new char[strlen(rc)];
    strcpy(rcity,rc);
    rprint();
  }

  rider(const rider &ro)
  {
    rname=new char[strlen(ro.rname)];
    strcpy(rname,ro.rname);
    rage=ro.rage;
    rcity=new char[strlen(ro.rcity)];
    strcpy(rcity,ro.rcity);
    rprint();
  }

  void rprint()
  {
    cout<<"riders name:"<<rname<<endl;
    cout<<"riders age:"<<rage<<endl;
    cout<<"riders city:"<<rcity<<endl;
  }
};

class wheel
{
private:
  char *wman;
  int wprice;
public:
  wheel()
  {
    wman=new char[strlen("NULL")+1];
    strcpy(wman,"NULL");
    wprice=0;
    wprint();
  }
  wheel(char wm[],int wp)
  {
    wman=new char[strlen(wm)+1];
    strcpy(wman,wm);
    wprice=wp;
  }
  wheel(const wheel &wo)
  {
    wman=new char[strlen(wo.wman)];
    strcpy(wman,wo.wman);
    wprice=wo.wprice;
    wprint();
  }
  void wprint()
  {
    cout<<"wheels manufacturer:  "<<wman<<endl;
    cout<<"wheels price:  "<<wprice<<endl;
  }
};

class bike
{
private:
  int bikeid;
  char *bname;
  wheel w1;
  rider *r1;
public:
  bike()
  :w1()
  {
    bname=new char[strlen("no bike")+1];
    strcpy(bname,"no bike");
    bikeid=0;
    bprint();
  }
  bike(int bi,char bn[],char wn[],int wp)
  :w1(wn,wp)
  {
    bname=new char[strlen(bn)+1];
    strcpy(bname,bn);
    bikeid=bi;
    bprint();
  }
  void bprint()
  {
    cout<<"bike name: "<<bname<<endl;
    cout<<"bike id: "<<bikeid<<endl;
    w1.wprint();
  }
  void rideron()
  {
    char rn[10];
    int ra=0;
    char rc[10];
    cout<<"eneter riders name: ";
    cin>>rn;
    cout<<"enter riders age:";
    cin>>ra;
    cout<<"enter riders city:";
    cin>>rc;
    cout<<"\n\n\n";
    r1=new rider(rn,ra,rc);
  }
  void riderof()
  {
    delete r1;
    r1=new rider();
  }
};
int main()
{
  char ch='y';
  bike b1(39,"pulsar","mrf",2000);
  cout<<"assign bike to rider\n";
  while(ch=='y')
  {
    cout<<"press y to assign & n to dismount rider\n";
    cin>>ch;
    if(ch=='y'||ch=='Y')
    {
      b1.rideron();
      b1.bprint();
    }
    else
    {
      b1.riderof();
      b1.bprint();
    }
    cout<<"do you want to change rider or dismount rider"<<endl;
  }

}
