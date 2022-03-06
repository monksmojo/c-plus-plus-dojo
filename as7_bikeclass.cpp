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
  wheel wo[];
  int bid;
  rider *ro;
public:
bike()
:wo()
{
	cout<<"default constructor bike class\n";
	cout<<"\n";
	ro=new rider();
	bname=new char[strlen("unknown")+1];
	strcpy(bname,"unknown");
	bid=0;
	bprint();

}
bike(char bn[],int bi,char rn[],char rc[],int ra)
{
  wo[1]={39,"ceat"};
  wo[0]={38,"mrf"};
  cout<<"inside bike container classbike parameterized constructor\n";
  cout<<"\n";
  cout<<"complete information\n";
  ro=new rider(rn,rc,ra);
  bname=new char[strlen(bn)];
  strcpy(bname,bn);
  bid=bi;
  bprint();
}
bike(const bike &bo)
{
	cout<<"inside bike copy constructor\n";
	wo[0]=bo.wo[0];
	wo[1]=bo.wo[1];
	bname=new char[strlen(bo.bname)];
	strcpy(bname,bo.bname);
	bid=bo.bid;
	ro=new rider();
	ro=bo.ro;
	bprint();
}
void bprint()
{
  ro->rprint();
  cout<<"bike id is: "<<bid<<endl;
  cout<<"riders bike name: "<<bname<<endl;
  wo[0].wprint();
  wo[1].wprint();
  delete ro;
}

};

int main()
{
	bike b1;
  bike b2(b1);
	bike b8("fury",07,"charlie","los angles",29);

}
