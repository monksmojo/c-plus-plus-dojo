#include<iostream>
using namespace std;
void genew(int n1,int n2)
{
  n1+=10;
  n2+=10;
  cout << "new 1st number gentrated inside the function\t" <<n1<< '\n';
  cout << "new 2nd number gentrated inside the function\t" <<n2<< '\n';
}

void genew1(int &n1,int &n2)
{
  n1+=10;
  n2+=10;
  cout << "new 1st number gentrated inside the function\t" <<n1<< '\n';
  cout << "new 2nd number gentrated inside the function\t" <<n2<< '\n';
}

void makemeyoung(int *myage)
{
  *myage=20;
  std::cout << "inside the function i am young" <<*myage<< '\n';
}

int main() {
  int a=10;
  int *p=&a;
  std::cout << "vaule of a=" <<a<< '\n';
  std::cout << "now we assign a pointer p to a " << '\n';
  std::cout << "*p will give value store at a=" << *p << '\n';
  std::cout << " p will give address of where 'A'is store =" << p << '\n';
  std::cout << " &a also will give address of where 'A'is store =" << &a << '\n';

  std::cout << "example of pass by value" << '\n';
  int n1,n2;
  std::cout << "enter 1st number" << '\n';
  cin>>n1;
  std::cout << "enter 2nd number" << '\n';
  cin>>n2;
  genew(n1,n2);
  cout << "new 1st number recieved  outside the function\t" <<n1<< '\n';
  cout << "new 2nd number recieved outside the function\t" <<n2<< '\n';

  cout<<"example of pass by refrence\n";
  genew1(n1,n2);
  cout << "new 1st number recieved  ou tside the function\t" <<n1<< '\n';
  cout << "new 2nd number recieved outside the function\t" <<n2<< '\n';


  cout<<"another exaple  of pass by refrence \n";
  int myage=40;
  std::cout << "my age=\t" <<myage<< '\n';
  makemeyoung(&myage);
  std::cout << "outside the function i am also yound" <<myage<< '\n';

  return 0;
}
