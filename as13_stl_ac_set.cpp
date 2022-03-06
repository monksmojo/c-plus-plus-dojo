#include<iostream>
#include<list>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
  string state[]={"punjab","gujrat","rajisthan","assam","chennai"};
  int n=sizeof(state)/sizeof(state[0]);
  set<string,less<string> >states;
  for(int i=0;i<n;i++)
  {
    states.insert(state[i]);
  }
  set<string,less<string> >::iterator it;
  for(it=states.begin();it!=states.end();it++)
  {
    cout<<*it<<"\t";
  }
  return 0;
}
