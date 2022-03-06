#include<iostream>
using namespace std;
int main()
{

std::cout << "result of the expression(3*2)+9-1=\t" <<(3*2)+9-1 <<'\n';
std::cout << "result of the expression 9/3*3=\t" <<9/3*3 <<'\n';

cout<<"example of if else\n";
int age=0;
bool notdrunk=false;
std::cout << "please enter your age" << '\n';
std::cin >> age;
std::cout << "are you drunk press\n 0 for no \n 1 for yes " << '\n';
cin>>notdrunk;

if ((age>=1) && (age<=16) )
{
  std::cout << "you cant drive" << '\n';
}
else if ( notdrunk )
{
  std::cout << "you cant drive" << '\n';

}
else
{
  std::cout << "you can drive" << '\n';
}
  return 0;
}
