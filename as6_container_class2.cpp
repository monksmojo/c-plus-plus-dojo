#include<stdio.h>
#include<cstring>
#include<iostream>
using namespace std;
class author
{
private:
  char *aname;
  char *aadd;
public:
  author()
  {
    cout<<"default constructor author class\n";
    aname=new char[strlen("unknown")+1];
    aadd=new char[strlen("unknown")+1];
    strcpy(aname,"unlnown");
    strcpy(aadd,"unknown");
    aprint();
  }
  author(char an[],char ad[])
  {
    cout<<"parameterised constructor author class\n";
    aname=new char[strlen(an)];
    aadd=new char[strlen(ad)];
    strcpy(aname,an);
    strcpy(aadd,ad);
    aprint();
  }
  author(const author &a)
  {
    cout<<"default copy constructor author class\n";
    aname=a.aname;
    aadd=a.aadd;
    aprint();
  }
  void aprint()
  {
    cout<<"author name: "<<aname<<endl;
    cout<<"author address: "<<aadd<<endl;

  }

};

class publisher
{
private:
  char *pname;
  char *padd;
public:
  publisher()
  {
    cout<<"default constructor publisher class\n";
    pname=new char[strlen("unknown")+1];
    padd=new char[strlen("unknown")+1];
    strcpy(pname,"unknown");
    strcpy(padd,"unknown");
    pprint();
  }
  publisher(char pn[],char pa[])
  {
    cout<<"parameterised constructor publisher class\n";
    pname=new char[strlen(pn)];
    padd=new char[strlen(pa)+1];
    strcpy(pname,pn);
    strcpy(padd,pa);
    pprint();
  }
  publisher(const publisher &p)
  {
    cout<<"copy constructor publisher class\n";
    pname=p.pname;
    padd=p.padd;
    pprint();
  }
  void pprint()
  {
    cout<<"publisher name: "<<pname<<endl;
    cout<<"publisher address: "<<padd<<endl;
  }

};

class book
{
private:
  int bid;
  char *bname;
  author a1;
  publisher p1;
public:
  book():
  a1(),p1()
  {
    cout<<"default constructor book class\n";
    bid=0;
    bname=new char[strlen("unknown"+1)];
    strcpy(bname,"unknown");
    bprint();
  }

  book(char an[],char ad[],char pn[],char pd[],char bn[],int id):
  a1(an,ad),p1(pn,pd)
  {
    cout<<"parameterised constructor book class\n";
    bid=id;
    bname=new char[strlen(bn)];
    strcpy(bname,bn);
    bprint();
  }

  book(author &a,publisher &p,char bn[],int id):
  a1(a),p1(p)
  {
    cout<<"copy constructor book class\n";
    bid=id;
    bname=new char[strlen(bn)];
    strcpy(bname,bn);
    bprint();
  }

  void bprint()
  {
    cout<<"book id: "<<bid<<endl;
    cout<<"book name: "<<bname<<endl;
  }
};
int main()
{
cout<<"\n\n";
cout<<"calling parameterized component class constructor\n";
author a("sgt price","los angeles");
publisher p("lootcrate","miami");
cout<<"\n\n";
cout<<"calling default component class constructor from container class\n";
book b1;
cout<<"\n\n";
cout<<"calling parameterized component class constructor from container class\n";
book b2("weekend","denver","lady","colarado","monster",96);
cout<<"calling component class copy constructor from container class\n";
cout<<"\n\n";
book b3(a,p,"modercombat",420);
return 0;
}
