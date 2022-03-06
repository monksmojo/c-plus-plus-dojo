#include<iostream>
using namespace std;
int main()
{
  int i=0;
  while (i<=10)
  {
      cout<<"i value\t"<<i<<'\n';
      i++;
  }
int guessnum=0;;
  do
  {
      cout<<"guess a no. between 1 and 10"<<'\n';
      cin>>guessnum;
  } while(guessnum != 4 );

  std::cout << "you win" << '\n';

  return 0;
}
