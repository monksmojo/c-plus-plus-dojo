#include<iostream>
#include<list>
#include<set>
#include<algorithm>
#include <iterator>
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
  bool operator < (const person &p) const
  {
      return(age<p.age);
  }
  ostream& operator << (ostream &out) const
  {
    out<<"name of the person"<<fname<<lname<<endl;
    out<<"age of person"<<age<<endl;
    return out;
  }
  void display() const
  {
    cout<<"neme of person: "<<fname<<" "<<lname <<endl;
    cout<<"person age is: "<<age<<endl;
  }
};
int main()
{
  person p1("jhon","doe",18);
  person p2("captain","marvel",20);
  multiset <person, less <person> > mu;
  mu.insert(p1);
  mu.insert(p2);
  multiset <person, less <person> > :: iterator it;
  for(it=mu.begin(); it!=mu.end(); it++)
  {
      it->display();
  }
  return 0;
}
