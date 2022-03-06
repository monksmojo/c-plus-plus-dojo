#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

class rider
{
private:
  char *rname;
  char *rcity;
  int rage;
public:
  rider()
  {
    cout<<"rider default constructor\n";
    rname=new char[strlen("unknown")+1];
    rcity=new char[strlen("unknown")+1];
    strcpy(rname,"unknown");
    strcpy(rcity,"unknown");
    rage=0;
  }
  rider(char name[],char city[],int age)
  {
    cout<<"rider parameterized constructor\n";
    rname=new char[strlen(name)];
    rcity=new char[strlen(city)];
    strcpy(rname,name);
    strcpy(rcity,city);
    rage=age;
  }
  rider(const rider &r)
  {
    cout<<"rider copy constructor\n";
    rname=r.rname;
    rcity=r.rcity;
    rage=r.rage;
  }

  void rprint()
  {
    cout<<"rider name is: "<<rname<<endl;
    cout<<"rider age is: "<<rage<<endl;
    cout<<"rider city is: "<<rcity<<endl;
  }

};

class wheel
{
private:
  int wid;
  char *wname;
public:
  wheel()
  {
    cout<<"wheel class default constructor\n";
    wname=new char [strlen("unknown")+1];
    strcpy(wname,"unknown");
    wid=0;
  }

  wheel(int id,char name[])
  {
    cout<<"wheel class parameterized constructor\n";
    wid=id;
    wname=new char [strlen(name)+1];
    strcpy(wname,name);
  }

  wheel(const wheel &w)
  {
    cout<<"wheel class copy constructor\n";
    wid=w.wid;
    wname=w.wname;
  }

  void wprint()
  {
    cout<<"wheels id: "<<wid<<endl;
    cout<<"wheel manufacturer is:"<<wname<<endl;
  }

};



class bike
{
private:
  char *bname;
  int bid;
  wheel *wo;
  rider *ro;
public:
bike(char name[],int id,wheel &wc,rider &rc)
{
  cout<<"inside bike container class\n";
  cout<<"complete information\n";
  ro=new rider(rc);
  bname=new char[strlen(name)];
  strcpy(bname,name);
  bid=id;
  wo=new wheel(wc);
}
void bprint()
{
  ro->rprint();
  cout<<"bike id is: "<<bid<<endl;
  cout<<"riders bike name: "<<bname<<endl;
  wo->wprint();
  delete wo;
  delete ro;
}

};

int main()
{
  wheel *w1=new wheel(39,"ceat");
  w1->wprint();
  cout<<"\n\n";
  rider *r1=new rider("xenos","nirvana",18);
  r1->rprint();
  cout<<"\n\n";
  bike *b1=new bike("FURY",20,*w1,*r1);
  b1->bprint();
  delete b1;
  delete w1;
  delete r1;

}
