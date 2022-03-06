#include <iostream>
using namespace std;
void aswap(int *c, int *d) ;
int main()
{
  int a,b;
  cout<<"call by address\n";
  cout << "enter two digits" << '\n';
  cin>>a;
  cin>>b;
  aswap(&a,&b) ;
  cout << "outside function" << "\t" <<"a="<<a<<"\t"<<"b="<<b<<"\n";
  return 0;
}
void aswap(int *c, int *d)
{
  int temp;
  temp=*c;
  *c=*d;
  *d=temp;
  cout<<"inside function" << "\t" <<"a="<< *c <<"\t"<<"b="<< *d <<"\n";
}
