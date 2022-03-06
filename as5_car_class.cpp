#include<iostream>
using namespace std;
#include<cstring>
#include<string.h>
class car
{
private:
  int id;
  char *man;
  char *mod;
public:
  car()
  {
    cout<<"inside defualt constructor\n";
    id=0;
    man=new char[strlen("unknown")+1];
    strcpy(man,"unknown");
    mod=new char[strlen("unknown")+1];
    strcpy(mod,"unknown");
    print();
  }

  car(int i,char ma[],char mo[])
  {
    cout<<"inside parameterised defualt constructor\n";
    id=i;
    man=new char[strlen(ma)];
    strcpy(man,ma);
    mod=new char[strlen(mo)];
    strcpy(mod,mo);
    print();
  }

  void print()
  {
    cout<<"car id is: "<<id<<"\n";
    cout<<"manufacturer of car is: "<<man<<"\n";
    cout << "car model is :" <<mod<< '\n';
  }
};
int main()
{
  car c1;
  car c2(03,"BMW","ZED");
  return 0;
}
