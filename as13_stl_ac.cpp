#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
class person
{
private:
  string fname;
  string lname;
  int age;
public:
  person(string l,string f,int a)
  {
    fname=f;
    lname=l;
    age=a;
  }
  void display()
  {
    cout<<"person name:  "<<fname <<lname<<endl;
    cout<<"person age is: "<<age<<endl;
  }
  void operator << (ostream &out)
  {
    out<<"neme of person"<<fname <<lname <<endl;
    out<<"person age is:"<<age<<endl;
  }
};
int main()
{
  person p1("jhon","doe",18);
  person p2("captain","clove",18);
  list<person> li;
  li.push_back(p1);
  li.push_back(p2);
  list<person>::iterator it;
  for(it=li.begin();it!=li.end();it++)
  {
    *it<<cout;
    cout<<"\n";
  }
  return 0;
}
