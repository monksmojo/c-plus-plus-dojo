#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <cstring>
using namespace std;
class emp
{
private:
  int eid;
  char ename[30];
  char edept[10];
public:
  void setvalues();//set employee value
  void print();
  emp();//e user defined defualt constructor setting defualt employee data
  emp(int id, char name[30], char dept[10] );// e1 user defined default constructor to set employee id name deprtment;
  emp(const emp &e0)
  {
    cout<<"inside copy constructor to copy employee\n";
    eid=e0.eid;
    strcpy(ename,e0.ename);
    strcpy(edept,e0.edept);
    print();
  }
};

void emp::setvalues()
{
  cout<<"enter employee id:";
  cin>>eid;
  cout<<"enter emplyee name:";
  cin.getline(ename,30,'\n');
  cout<<"enter employee department name:";
  cin.getline(edept,10,'\n');
}

void emp::print()
{
  cout<<"eployee id:  "<<eid<<"\n";
  cout << "employee name:  "<<ename<< '\n';
  cout << "employee department no:  "<<edept<< '\n';
}

emp::emp()
{
  cout << "user defined defualt constructor setting defualt employee data" << '\n';
  eid=0;
  strcpy(ename,"NULL");
  strcpy(edept,"NULL");
  print();
}

emp::emp(int id, char name[30], char dept[10] )
{
  cout << "parameterised user defined default constructor to set employee id name deprtment" << '\n';
  eid=id;
  strcpy(ename,name);
  strcpy(edept,dept);
  print();
}

int main()
{
  //int id;
  //string name;
  //float dept_no;
  emp e;
  emp e1(39,"peter","IT");
  e.setvalues();
  e.print();
  emp e2(e);
  return 0;
}
