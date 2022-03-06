#include<iostream>
using namespace std;

int sum(int n1,int n2)
{
  int result=n1+n2;
  return result;
}

int sum(int n1,int n2,int n3)
{
  int result=n1+n2+n3;
  return result;
}

int fact(int num)
{
  int sum=1;
  if (num==1) {
    return sum;
  } else {
    sum = num*fact(num-1);
    return sum;
  }

}
int main()
{
  int num1,num2,num3;
  cout<<"enter the first num\n";
  cin>>num1;
  cout<<"enter the second num\n";
  cin>>num2;
  cout<<"enter the third num\n";
  cin>>num3;
  int r1=sum(num1,num2);
  cout<<"sum of fisrt and secomd num =\t"<<r1<<'\n'<<endl;
  
  int r2=sum(num1,num2,num3);
  cout<<"sum of fisrt secomd & third num =\t"<<r2<<'\n'<<endl;


  int factnum;
  std::cout << "enter a num to find its factorial\n" << '\n';
  cin>>factnum;
  std::cout << "factorial of the no. =" << '\t'<<fact(factnum)<<'\n';

  return 0;
}
