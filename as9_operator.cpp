#include<iostream>
using namespace std;
#include<cstdlib>


class inset
{
private:
  int size;
  int *value;
public:
  inset(int s)
  {
    size=s;
    value=new int[4];
  }

  int& operator[] (int index)
  {
    if(index>size)
    {
      cout<<"index out of bound\n";
    }

      return value[index];

  }

};
void display(inset &is,int size)
{
  for(int i=0; i<size; i++)
  {
    cout << is[i] <<endl;
  }
}

int main()
{
  int s;
  cout<<"program to print random no.\n";
  cout<<"enter the no. of random no. you want to genrate"<<endl;
  cin>>s;
  inset i1(s);
  for(int i=0; i<s; i++)
  {
    int num=rand();
    i1[i]=num;

  }

  display(i1,s);
}
