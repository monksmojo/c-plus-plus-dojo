#include <iostream>

using namespace std;
  int main()
  {
  float a=0,b=0;
  std::cout << "please enter two no.s"<< '\n'<<"enter your first no.\n"<<endl;
  std::cin >>a;
  std::cout <<"enter your second no."<<endl;
  std::cin >>b;
  std::cout << "all arthmetic functions\t" << '\n';
  std::cout << "addition of two no.\t" << a+b <<endl;;
  std::cout << "subtraction of two no.\t" << a-b << '\n';
  std::cout << "multiplication of no.\t" << a*b << '\n';
  std::cout << "devision of no.\t" << a/b << '\n';
  
  int c=50;
  std::cout << "value of c\n" <<c<< '\n';
  int d=0;
  d=c++;
  std::cout << "value of d\n" <<d<< '\n';
  d=++c;
  std::cout << "value of d\n" <<d<< '\n';
  d=c--;
  std::cout << "value of d\n" <<d<< '\n';
  d=--c;
  std::cout << "value of d\n" <<d<< '\n';
  return 0;
}
