#include <iostream>
using namespace std;
int main()
{
  cout<<"example of switch case\n";
  string  fname;
  char lname[10];

  std::cout << "enter your first name\n" << '\n';
  cin>>fname;
  std::cout << "enter your last name" << '\n';
  cin>>lname;
  std::cout << "enter your greeting options\n" <<"1. for holla\n"<<"2. for bonjour\n"<<"3 for hello\n"<<endl;
  int greeting=0;
  cin>>greeting;
  switch (greeting)
  {
    case 1:
          cout<<"holla everybody and \t"<<fname << lname<<endl;
    break;

    case 2:
          std::cout << "bonjour everybody and\t" <<fname << lname << '\n';

    break;

    case 3:
          std::cout << "hello everybody nad " <<fname << lname << '\n';
    break;

    default:
            std::cout << "no such greetin option" << '\n';
    break;


  }
  return 0;
}
