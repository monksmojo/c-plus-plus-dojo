#include<iostream>
#include<vector>
using namespace std;
int main()
{
  std::vector <int> v;
  int lottery[5]={1,2,3,4,5};
  cout<<v.insert(v.begin(),lottery+5)<<endl;
  return 0;

}
