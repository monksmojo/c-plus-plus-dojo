#include<iostream>
using namespace std;
int main()
{

  string name;
  std::cout << "enter student name\t" << '\n';
  cin>>name;
  float sum=0;
  float per=0;
  int marks;
  for(int i=0;i<7; i++ )
  {
    cout<<"enter the marks in "<<i+1<<" subject =\t"<<endl;
    cin>>marks;
    sum+=marks;
    std::cout << '\n';


  }
    std::cout << "the total sum"<<sum << '\n';
    per=(sum/700)*100;
    std::cout <<name<<'\t'<<"has scored percentage=\t"<<per<< '\n';
    return 0;

}
